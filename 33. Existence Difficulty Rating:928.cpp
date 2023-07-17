
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    long long int x,y;
	    cin>>x>>y;
	    
	    //right = 4*y*(pow(x,2));
	    //left = (pow(x,4))+4*(pow(y,2));
	    
	    if(x*x==2*y)
	    cout<<"YES"<<endl;
	    
	    else
	    cout<<"NO"<<endl;
	}
	
	return 0;
}
