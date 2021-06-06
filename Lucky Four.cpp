#include <iostream>
using namespace std;

int main() {
	
int t;
cin>>t;
while(t>0){
    int res=0;
    int num;
    cin>>num;
    while(num>0){
        if(num%10 == 4){
            res++;
        }
            num = num/10;

    }
    
       cout<< res << endl;
        t--;    
    
}
	
	return 0;
}
