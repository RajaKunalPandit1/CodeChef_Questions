#include <iostream>
using namespace std;

int main() {
	
	int t,i,rem;
	cin>>t;
   for(i=0;i<t;i++){
	    int num,rev=0;
	    cin>>num;
	    while(num!=0){
	        rem = num%10;
	        rev = rev*10+rem;
	        num = num/10;
	    }
	    cout<< rev << endl;
	}
	return 0;
}
