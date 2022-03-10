Output Status: 

Sub-Task	Task #	Result
(time)
1	0	AC
(0.004039)
1	1	AC
(0.003976)
1	2	AC
(0.004046)
1	3	AC
(0.004099)
1	4	AC
(0.003884)
Subtask Score: 40.00%	Result - AC
2	5	AC
(0.022141)
2	6	AC
(0.024766)
2	7	AC
(0.025426)
2	8	AC
(0.020672)
2	9	AC
(0.048999)
Subtask Score: 60.00%	Result - AC
Total Score = 100.00%


// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <unordered_set>
#include <cctype>
#define ll long long int
#define endl "\n"
using namespace std;


int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
    
    
    ll t;
    cin>> t;
    
    while(t--){
        
        ll n;
        cin>> n;
        
        ll arr[n+1];
        
        for(int i=0;i<n;i++){
            cin>> arr[i];
        }
        
        ll res = 0;
        
        if(arr[0] != arr[1]){
            res++;
        }
        if(arr[n-1] != arr[n-2]){
            res++;
        }
        
        for(int i=1;i<n-1;i++){
            if(arr[i] != arr[i-1] || arr[i] != arr[i+1]){
                res++;
            }
        }
        
        cout<< res << endl;
    }
    
    
	return 0;
}

