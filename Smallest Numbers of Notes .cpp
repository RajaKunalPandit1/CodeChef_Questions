#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int notes=0;
	    int n;
	    cin>>n;
	  
	    if(n>=100){
	        int q = n/100;
	        notes+= q;
	        n = n -q*100;
	    }if(n>=50){
	        int q  = n/50;
	        notes += q;
	        n = n-q*50;
	    }if(n>=10){
	        int q = n/10;
	        notes+= q;
	        n = n-q*10;
	    }if(n>=5){
	        int q = n/5;
	        notes+= q;
	        n = n-q*5;
	    }if(n>=2){
	        int q = n/2;
	        notes+= q;
	        n = n-q*2;
	    }if(n>=1){
	        int q = n/1;
	        notes+= q;
	        n = n-q*1;
	    }
	    
	    cout<< notes << endl;
	    
	}
	
	
	return 0;
}

// Another Solution

#include <iostream>
using namespace std;

int main() {
    int r;
    cin >> r;
    int a[6] = {1, 2, 5, 10, 50, 100};
    while (r > 0)
    {
        int num = 0;
        
        int x;
        cin >> x;
        while (x > 0)
        {
            
            if (x >= 100)
            {
                x -= 100;
                num++;
            }
            else
            {
                for(int i = 5;i>=0;i--)
                {
                    if(x>=a[i])
                    {
                        x-=a[i];
                        num++;
                        break;
                    }
                }
            }
        }
        cout << num << endl;
        r--;
    }

    return 0;
}
