#include <bits/stdc++.h>
#include <iostream>
#define ll long long 
#define int long long
#define endl "\n"
using namespace std;

int32_t main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    ll sum = 1;
	   if(n == 1){
	       cout<< 1 << endl;
	       continue;
	   }
	    n = n-2;
	    sum += n*(n+1);
        cout<< sum << endl;
	}
	
	return 0;
}
