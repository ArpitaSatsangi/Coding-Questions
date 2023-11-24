#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,ans=0;
	    cin>>n;
	    
	    int arr[n][2];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i][0];
	        cin>>arr[i][1];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i][0]==9 || arr[i][0]== 10 || arr[i][0]==11)
	        {
	            //non scorable
	            arr[i][1]=0;
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            if(arr[i][0]==arr[j][0] && i!=j)
	            {
	                arr[i][1]=max(arr[i][1], arr[j][1]);
	                arr[j][1]=0;
	            }
	        }
	        
	    }
	   
	    
	    for(int i=0;i<n;i++)
	    {
	        ans=ans+arr[i][1];
	    }
	    cout<<ans<<endl;
	    
	}
	
	return 0;
}
