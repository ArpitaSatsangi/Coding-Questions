#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k,c=0;
	    cin>>n>>k;
	    
	    int h[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>h[i];
	        if(h[i]>k)
	        {
	            c++;
	        }
	    }
	    
	    cout<<c<<endl;
	}
	
	return 0;
}
