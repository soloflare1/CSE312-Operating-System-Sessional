// Enter Number of Processes: 4
// Enter Time Quantum: 2
// Enter Burst time for each Process:
// P1: 5
// P2: 3
// P3: 8
// P4: 6

// Process	Burst Time	Waiting Time	Turnaround Time
// P1	    5		    9		    14
// P2	    3		    6		    9
// P3	    8		    14		    22
// P4	    6		    11		    17

// Average Waiting Time: 10.00
// Average Turnaround Time: 15.50


  
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, time_quantum;
    cout << "Enter Number of Processes: ";
    cin >> n;

    cout << "Enter Time Quantum: ";
    cin >> time_quantum;

    int burst_time[n], remaining_time[n];
    int waiting_time[n], turnaround_time[n];

    cout << "Enter Burst time for each Process:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": ";
        cin >> burst_time[i];
        remaining_time[i] = burst_time[i];
    }

    int time = 0;
    bool done;

    // Round Robin Scheduling
    while (true)
    {
        done = true;
        for (int i = 0; i < n; i++)
        {
            if (remaining_time[i] > 0)
            {
                done = false;

                if (remaining_time[i] > time_quantum)
                {
                    time += time_quantum;
                    remaining_time[i] -= time_quantum;
                }
                else
                {
                    time += remaining_time[i];
                    waiting_time[i] = time - burst_time[i];
                    remaining_time[i] = 0;
                }
            }
        }
        if (done)
            break;
    }

    // Turnaround Time
    for (int i = 0; i < n; i++)
    {
        turnaround_time[i] = waiting_time[i] + burst_time[i];
    }

    // Display results
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << "\t"
             << burst_time[i] << "\t\t"
             << waiting_time[i] << "\t\t"
             << turnaround_time[i] << endl;
    }

    // Average calculation
    float total_waiting = 0, total_turnaround = 0;
    for (int i = 0; i < n; i++)
    {
        total_waiting += waiting_time[i];
        total_turnaround += turnaround_time[i];
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << total_waiting / n << endl;
    cout << "Average Turnaround Time: " << total_turnaround / n << endl;

    return 0;
}
