#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,a=0,b=0;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    // Initially, Alice is the server, and Bob is the receiver.
	    if(s[0]=='A')
	       a+=1;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='A' && s[i+1]=='A')
	           a+=1;
	           
	       else if(s[i]=='B' && s[i+1]=='B')
	           b+=1;
   
	    }
	    cout<<a<<" "<<b<<endl;
	}
	
	return 0;
}
