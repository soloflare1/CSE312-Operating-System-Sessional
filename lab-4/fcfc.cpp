#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter Number of Processes: ";
    cin >> n;

    int bt[n], wt[n], tat[n];
    float avg_wt = 0, avg_tat = 0;

    cout << "Enter Burst time for each Process:\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << ": ";
        cin >> bt[i];
        cout << bt[i] << endl;
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
        cout << "P" << i + 1 << "\t" 
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
