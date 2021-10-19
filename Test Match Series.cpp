#include <bits/stdc++.h>
#include <iostream>
#define endl "\n"
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--){
       int n=5;
       int arr[n];
       for(int i=0;i<n;i++){
           cin>>arr[i];
       }
       int ind=0,eng=0,dra=0;
        for(int i=0;i<n;i++){
            if(arr[i] == 0){
                dra++;
            }else if(arr[i] == 1){
                ind++;
            }else{
                eng++;
            }
        }
        
        if(ind>eng){
            cout<< "India" << endl;
        }else if(eng>ind){
            cout<< "England" << endl;
        }else{
            cout<< "Draw" << endl;
        }
    }

	return 0;
}
