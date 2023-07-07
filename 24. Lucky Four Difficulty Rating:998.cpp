
#include <iostream>
#include<string>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    int c=0;
	    cin>>s;
	    
	    
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='4')
	        {
	            c=c+1;
	        }
	    }
	    
	    cout <<c<<endl;
	}
	
	return 0;
}


