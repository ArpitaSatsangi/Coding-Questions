#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,b;
	    bool flag = 0;
	    cin>>n>>b;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	   for(int i=0;i<n;i++)
	   {
	       for(int j=0;j<n;j++)
	       {
	           if(abs(a[i]-a[j])==b)
	               flag = 1;
	       }
	   }
	   
	   cout<<flag<<endl;
	   
	}
	return 0;
}
