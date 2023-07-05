/*
Chef has n slippers, l of which are left slippers and the rest are right slippers. 
Slippers must always be sold in pairs, where each pair contains one left and one right slipper. 
If each pair of slippers cost x rupees, what is the maximum amount of rupees that Chef can get for these slippers?
*/


#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,l,x,r, ans;
	    cin>>n>>l>>x;
	    
	    r=n-l;
	    ans=min(r,l);
	    cout << ans*x <<endl;
	    
	}
	
	return 0;
}
