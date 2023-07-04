/*
Problem:-
Chef really likes to compete on Codechef, and he has gained an impressive rating of X, where X>0. 
There is also a parallel universe, where ratings on Codechef are negative instead. 
The only thing that remains unchanged in the parallel universe is Chef's love for competing on Codechef. 
Chef's rating on Codechef in the parallel universe is Y, where Y<0.

Due to some cosmic event, the parallel universe has been destroyed, resulting in Chef forgetting both X and Y. He only remembers the sum S=X+Y. 
He wonders what the maximum possible product of his ratings is, given that he knows the sum of his ratings.
*/


#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int s,x,y;
	    cin>>s;
	    
	    x=s+1;
	    y=s-x; // or y=-1
	    
	    cout << x*y <<endl;
	    
	}
	
	return 0;
}
