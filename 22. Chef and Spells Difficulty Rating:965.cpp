/*
Chef has three spells. Their powers are a,b and c respectively. 
Initially, Chef has 0 hit points, and if he uses a spell with power P, then his number of hit points increases by P.
Before going to sleep, Chef wants to use exactly two spells out of these three. 
Find the maximum number of hit points Chef can have after using the spells.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int a,b,c,ans;
	    cin>>a>>b>>c;
	    
	    ans= max( a+c, max(a+b, b+c) );
	    	    
	    cout<<ans<<endl;
	}
	
	return 0;
}
