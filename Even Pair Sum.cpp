Output Status: 

Sub-Task	Task #	Result
(time)
1	1	AC
(0.003760)
Subtask Score: 10.00%	Result - AC
2	2	AC
(0.003731)
Subtask Score: 10.00%	Result - AC
3	3	AC
(0.003742)
Subtask Score: 80.00%	Result - AC
Total Score = 100.00%
  
  
  #include <bits/stdc++.h>
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
        
        ll a,b;
        cin >> a >> b;
        
        ll a_even = floor(a/2);
        ll b_even = floor(b/2);
        
        ll a_odd = a - a_even;
        ll b_odd = b - b_even;
        
        ll res1 = a_odd * b_odd;
        ll res2 = a_even * b_even;
        
        cout<< res1+res2 << endl;
    }
   
   
    
	return 0;
}

