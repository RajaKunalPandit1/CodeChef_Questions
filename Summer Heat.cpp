#include <iostream>
using namespace std;

int main() {
        
        int t;
        cin>>t;
        while(t--){
            int xa,xb,Xa,Xb;
            cin>>xa>>xb>>Xa>>Xb;
            int typea,typeb;
            typea =  Xa/xa;
            typeb =  Xb/xb;
            cout<< (typeb+typea) << endl;
            
        }

	return 0;
}
