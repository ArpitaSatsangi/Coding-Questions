#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	//int vowels[5]={97,101,105,111,117}; //a,e,i,o,u
	
	while(t--)
	{
	 
	    int n, count;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    count=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
	        {
	            count=0;
	            continue;
	        }
	        
	        else
	        {
	            count++;
	            if(count==4)
	               break;
	        }
	    }
	    
	if(count<4)
	cout<<"YES"<<endl;
	
	else
	cout <<"NO"<<endl;
	
	
	}
	
	return 0;
	

}
