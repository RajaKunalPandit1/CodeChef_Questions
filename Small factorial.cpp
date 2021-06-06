#include <iostream>
using namespace std;

int main() {

    int t,num;
    cin>>t;
    while(t--){
        int fact=1;
        cin>> num;
        for(int i=2;i<=num;i++){
            fact = fact * i;
        }
        cout<< fact << endl;
        
    }


	return 0;
}
