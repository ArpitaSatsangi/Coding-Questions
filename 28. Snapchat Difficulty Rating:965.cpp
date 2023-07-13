#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,a[1000],b[1000],count=0,ans=0;
	    cin>>n;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        
	        if(a[i]!=0 && b[i]!=0)
	        {
	            count++;
	            ans=max(ans,count);
	        }
	        
	        else
	        {	            
	            count=0;
	        }
	       
	    }

	    cout<<ans<<endl;
	}
	
	return 0;
}
