#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k,balls=0;
	    cin>>n>>k;
	    
	    balls=(k*(k+1))/2;
	    
	    if(n<balls)
	    cout<<"NO"<<endl;
	    
	    else
	    cout<<"YES"<<endl;
	   
	}
	
	
	return 0;
}
