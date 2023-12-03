#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int count=0;
	    int arr[n];
	    
	    for(int i=0;i<n;i++)
    	    cin>>arr[i];
	    

	    for(int i=2;i<n;i++)
	    {
	        if(arr[i]!=arr[i-1] || arr[i]!=arr[i-2])
	        {
	            count++;
	        }
	    }
	    
	    if (arr[n - 1] != arr[n - 2]) 
	       count++;
        if (arr[0] != arr[1]) 
            count++;
	    
	    cout<<count<<endl;
	}
	
	return 0;
}
