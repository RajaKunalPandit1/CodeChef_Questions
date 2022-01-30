Output Status: 

Sub-Task	Task #	Result
(time)
1	0	AC
(0.003913)
Subtask Score: 100.00%	Result - AC
Total Score = 100.00%


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
        ll arr[4];
        for(int i=0;i<4;i++){
            cin >> arr[i];
        }
        
        sort(arr,arr+4);
        
        if((arr[1] == arr[0]) && (arr[3] == arr[2])){
            cout<< "YES" << endl;
        }else{
            cout<< "NO" << endl;
        }
        
    }
    
    
	return 0;
}
