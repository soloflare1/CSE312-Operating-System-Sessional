#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter Number of Processes: ";
    cin >> n;
    
    int bt[n], wt[n], tat[n], pid[n];
    float avg_wt = 0, avg_tat = 0;

    cout << "Enter Burst Time for each Process:\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << ": ";
        cin >> bt[i];
        pid[i] = i + 1; // store process id
    }

    // Sort in descending order of burst time → LJF
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (bt[i] < bt[j]) {   // Larger burst time first → LJF
                swap(bt[i], bt[j]);
                swap(pid[i], pid[j]);
            }
        }
    }

    // Calculate waiting time
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + bt[i - 1];
    }

    // Calculate turnaround time
    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }

    // Display results
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << pid[i] << "\t" 
             << bt[i] << "\t\t" 
             << wt[i] << "\t\t" 
             << tat[i] << endl;
    }

    // Calculate averages
    float total_wt = 0, total_tat = 0;
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
    }

    avg_wt = total_wt / n;
    avg_tat = total_tat / n;

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << avg_wt << endl;
    cout << "Average Turnaround Time: " << avg_tat << endl;

    return 0;
}


// // Enter Number of Processes: 4
// // Enter Burst Time for each Process:
// P1: 5
// P2: 3
// P3: 8
// P4: 6


// // Process	Burst Time	Waiting Time	Turnaround Time
// // P3	    8		    0		    8
// // P4	    6		    8		    14
// // P1	    5		    14		    19
// // P2	    3		    19		    22

// // Average Waiting Time: 10.25
// // Average Turnaround Time: 15.75


