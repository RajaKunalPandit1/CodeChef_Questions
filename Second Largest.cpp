#include <iostream>
using namespace std;

int main() {
	
	int t, arr[3], large=0,res=-1;
	cin>>t;
	while(t--){
	    for(int i=0;i<3;i++){
	        cin>> arr[i];
	    }
	    for(int i=0;i<3;i++){
	        if(arr[i]>arr[large]){
	            res = large;
	            large = i;
	        }else if(arr[i]!= arr[large]){
	            if(arr[i]>arr[res] || res==-1){
	                res = i;
	            }
	        }
	    }
	    cout<< arr[res] << endl;
	    
	    
	}
	
	return 0;
}
