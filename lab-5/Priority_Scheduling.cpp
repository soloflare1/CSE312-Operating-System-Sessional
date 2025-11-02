#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cout << "Enter Number of Processes: ";
    cin >> n;

    vector<int> bt(n), wt(n), tat(n), priority(n), process(n);

    // Input burst time and priority
    for (int i = 0; i < n; i++) {
        process[i] = i + 1;
        cout << "Enter Burst time & Priority for Process " << i + 1 << ": ";
        cin >> bt[i] >> priority[i];
    }

    // Sort by priority (lower value = higher priority)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (priority[i] > priority[j]) {
                swap(priority[i], priority[j]);
                swap(bt[i], bt[j]);
                swap(process[i], process[j]);
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
    cout << "\nProcess\tPriority\tBurst Time\tWaiting Time\tTurnaround Time\n";
    float avg_wt = 0, avg_tat = 0;
    for (int i = 0; i < n; i++) {
        cout << "P" << process[i] << "\t"
             << priority[i] << "\t\t"
             << bt[i] << "\t\t"
             << wt[i] << "\t\t"
             << tat[i] << endl;
        avg_wt += wt[i];
        avg_tat += tat[i];
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << avg_wt / n;
    cout << "\nAverage Turnaround Time: " << avg_tat / n << endl;

    return 0;
}
