#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    long long power=0;
	    int n=s.length();
	    int b[n];
	    
	    for(int i=0;i<n;i++)
	        b[i]=s[i];
	        
	    sort(b, b+n);
	    
	    for(int i=0;i<s.length();i++)
	    {
	        power +=  ((i+1)* (b[i]-96));
	    }
	    
	    cout<<power<<endl;
	   
	}
	
	return 0;
}
