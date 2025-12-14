#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    int bt[n], wt[n], tat[n], pid[n];
    float avg_wt = 0, avg_tat = 0;

  
    for (int i = 0; i < n; i++) 
    {
        cin >> bt[i];
        pid[i] = i + 1; 
    }

 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) 
        {
            if (bt[i] > bt[j]) 
            {
                // swap(bt[i], bt[j]);
                // swap(pid[i], pid[j]);
                
                int tmp = bt[i];
                bt[i] = bt[j];
                bt[j] = tmp;
                
                
                int tmp2 = pid[i];
                pid[i] = pid[j];
                pid[j] = tmp2;
            }
        }
    }

   
    wt[0] = 0;
    for (int i = 1; i < n; i++) 
        wt[i] = wt[i - 1] + bt[i - 1];
    

    for (int i = 0; i < n; i++) 
        tat[i] = wt[i] + bt[i];
    

    
    cout << "\nP\tBT\t\tWT\t\tTAT\n";
    for (int i = 0; i < n; i++) 
    {
        cout << "P" << pid[i] << "\t" 
             << bt[i] << "\t\t" 
             << wt[i] << "\t\t" 
             << tat[i] << endl;
    }

 
    float total_wt = 0, total_tat = 0;
    
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
    }

    avg_wt = total_wt / n;
    avg_tat = total_tat / n;

    cout << fixed << setprecision(2);
    cout << endl;
    cout << "Avg WT: " << avg_wt << endl;
    cout << "Avg TAT: " << avg_tat << endl;

    return 0;
}
