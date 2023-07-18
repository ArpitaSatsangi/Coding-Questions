#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x,a[100000],index=0;
	    cin>>n>>x;
	    
	    for(int i=1;i<=n;i++)
	    cin>>a[i];
	    
	    for(int i=1;i<=n;i++)
	    {
	        if(a[i]<x)
	        {
	            index=i;
	        }
	    }
	    
	    cout<<index<<endl;
	}
	
	return 0;
}
