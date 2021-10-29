#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    
	    cout << 1 << " ";
	    for(int i=0;i<n;i++){
	        cout<< (1ll << i) << " ";
	    }
	    cout<< endl;
	    
	}
	
	return 0;
}


// Another Solution 

#include <bits/stdc++.h>
#include <iostream>
#define ll long long int
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	 
	        ll p = pow(2,n);
	       ll count = 1;
	       cout<< 1 << " ";
	       for(int i=1;i<n;i++){
	           cout<< i << " ";
	           count+= i;
	       }
	    cout<< p-count << endl;
	}
	
	return 0;
}
