#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,count=0;
	    cin>>x;
	  
	    if(x%5!=0)
	    cout<<"-1"<<endl;
	    
	    else
	    {
	        if(x%10==0)
	        cout<<"0"<<endl;
	        
	        else
	        {
	            for(int i=0;i<100;i++)
	            {
	                x*=2;
	                if(x%10==0)
	                {
	                    cout<<i+1<<endl;
	                    break;
	                }
	            }
	        }
	    }
	}

  
	return 0;
}
