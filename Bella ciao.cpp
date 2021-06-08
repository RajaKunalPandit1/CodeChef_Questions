#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

     int t;
     cin>>t;
     while(t--){
         
       long int D,d,p,q,count=0;
         cin>> D>>d>>p>>q;
        long int n = D/d;
         count = n*p*d + (q*(n*(n-1))/2)*d +(D%d)*(p+n*q);
         cout<< count << endl;
         
     }
	return 0;
}
