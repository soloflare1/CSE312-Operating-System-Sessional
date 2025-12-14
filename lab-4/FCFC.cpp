#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter Number of Processes: ";
    cin >> n;

    int burst_time[n], waiting_time[n], turnaround_time[n];
    float avg_waiting_time = 0, avg_turnaround_time = 0;

    cout << "Enter Burst time for each Process:\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << ": ";
        cin >> burst_time[i];
        cout << burst_time[i] << endl;
    }

    // Calculate waiting time
    waiting_time[0] = 0;
    for (int i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
    }

    // Calculate turnaround time
    for (int i = 0; i < n; i++) {
        turnaround_time[i] = waiting_time[i] + burst_time[i];
    }

    // Display results
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t" 
             << burst_time[i] << "\t\t" 
             << waiting_time[i] << "\t\t" 
             << turnaround_time[i] << endl;
    }

    // Calculate averages
    float total_waiting = 0, total_turnaround = 0;
    for (int i = 0; i < n; i++) {
        total_waiting += waiting_time[i];
        total_turnaround += turnaround_time[i];
    }

    avg_waiting_time = total_waiting / n;
    avg_turnaround_time = total_turnaround / n;

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << avg_waiting_time << endl;
    cout << "Average Turnaround Time: " << avg_turnaround_time << endl;

    return 0;
}


// Enter Number of Processes: 3
// Enter Burst time for each Process:
// P1: 5
// P2: 3
// P3: 8


// Process	Burst Time	Waiting Time	Turnaround Time
// P1	    5		    0		    5
// P2	    3		    5		    8
// P3	    8		    8		    16

// Average Waiting Time: 4.33
// Average Turnaround Time: 9.67

