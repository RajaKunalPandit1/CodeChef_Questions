#include <iostream>
using namespace std;

int main() {
 
   int t,n, sum=0,first,last;
   cin>> t;
   while(t--){
       
      cin>>n;
      last = n%10;
      first = n;
      while(first>=10){
          first = first/10;
      }
       sum = last+first;
       cout<< sum << endl;
       
   }

	return 0;
}
