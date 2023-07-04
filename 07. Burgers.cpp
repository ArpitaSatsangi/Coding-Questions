/*
Problem:-

Chef is fond of burgers and decided to make as many burgers as possible.
Chef has A patties and B buns. To make 1 burger, Chef needs 1 patty and 1 bun.
Find the maximum number of burgers that Chef can make.
*/

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b;
	    
	    if(a>=b)
	    c=b;
	    
	    else
	    c=a;
	    
	    cout<<c<<endl;
	    
	}
	
	return 0;
}
