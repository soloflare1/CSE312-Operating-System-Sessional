#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter Number of Processes: ";
    cin >> n;

    vector<int> bt(n), rt(n), wt(n), tat(n), pid(n);
    for(int i=0;i<n;i++){
        cout << "Enter Burst Time for Process " << i+1 << ": ";
        cin >> bt[i];
        rt[i] = bt[i];
        pid[i] = i+1;
    }

    int complete = 0, t = 0, minm;
    int shortest = -1;
    bool found = false;

    while(complete != n){
        minm = INT_MAX;
        found = false;
        for(int i=0;i<n;i++){
            if(rt[i] > 0 && rt[i] < minm){
                minm = rt[i];
                shortest = i;
                found = true;
            }
        }

        if(!found){
            t++;
            continue;
        }

        rt[shortest]--;
        t++;

        if(rt[shortest] == 0){
            complete++;
            wt[shortest] = t - bt[shortest];
            tat[shortest] = wt[shortest] + bt[shortest];
        }
    }

    // Output
    cout << "\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n";
    float total_wt=0, total_tat=0;
    for(int i=0;i<n;i++){
        cout << "P" << pid[i] << "\t" << bt[i] << "\t\t" << wt[i] << "\t\t" << tat[i] << endl;
        total_wt += wt[i];
        total_tat += tat[i];
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << total_wt/n << endl;
    cout << "Average Turnaround Time: " << total_tat/n << endl;

    return 0;
}




// Enter Number of Processes: 3
// Enter Burst Time for Process 1: 6
// Enter Burst Time for Process 2: 8
// Enter Burst Time for Process 3: 7



// Process	Burst Time	Waiting Time	Turnaround Time
// P1	    6		    0		    6
// P3	    7		    6		    13
// P2	    8		    13		    21

// Average Waiting Time: 6.33
// Average Turnaround Time: 13.33


