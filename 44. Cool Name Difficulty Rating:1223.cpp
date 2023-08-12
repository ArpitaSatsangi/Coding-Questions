#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int power=0,index=0;
	    int n=s.length();
	    int b[26]={0};
	    
	    /*
	    for(int i=0;i<s.length();i++)
	    {
	        
	        cout<<s[i]-96<<" , ";
	        cout<<i+1<<" , ";
	        power = power +  ((i+1)* (s[i]-96));
	        cout<<"^POWER^-  "<<power<<' , ';
	        cout<<"(i+1)* (s[i]-96)____ "<<((i+1)* (s[i]-96))<<endl;
	    }
	    */
	    
	    for(int i=0;i<n;i++)
	    {
	        index=(s[i]-96);
	        b[i+1]++;
	    }
	    
	    
	    for(int i=0;i<26;i++)
	    cout<<b[i]<<" , ";
	    
	    
	    for(int i=0;i<s.length();i++)
	    {
	        
	        if(b[i+1])
	        {
	        power = power +  (b[i+1] * (s[i]-96));
	        }
	        cout<<"^POWER^-  "<<power<<' , ';
	        cout<<"b(i+1)*____ "<<b[i+1]<<endl;
	        
	    }
	    
	    
	    cout<<power<<endl;
	   
	}
	
	return 0;
}
