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

//----------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n, b, i=0, j=1;
	    bool flag = 0;
	    cin>>n>>b;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	   while(i<j){
	       
	       if(abs(a[i]-a[j])==b)
	           flag = 1;
	           
	       else if((a[j]-a[i]<b))
                j++;
            
           else
                i++;
            
	   }
	   
	   cout<<flag<<endl;
	   
	}
	return 0;
}
	
