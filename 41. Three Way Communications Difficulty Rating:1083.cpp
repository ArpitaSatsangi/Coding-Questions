#include <iostream>
#include <cmath>
using namespace std;


int distance(int x1,int y1,int x2,int y2)
{
    int ans = 0;
    
    int xx = (x2-x1)*(x2-x1);
    int yy = (y2-y1)*(y2-y1);
    
    //ans = (xx+yy)**0.5;
    ans = (xx+yy);
    
    return ans;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int r,d1,d2,d3;
	    cin>>r;
	    
	    //the current locations of the Chef, the head server, and the sous-chef
	    int Chef_x, Chef_y, head_x, head_y, sous_x, sous_y;
	    cin>>Chef_x>>Chef_y; 
	    cin>>head_x>>head_y; 
	    cin>>sous_x>>sous_y;
	    
	    d1=distance(Chef_x, Chef_y, head_x, head_y);
	    d2=distance(head_x, head_y, sous_x, sous_y);
	    d3=distance(sous_x, sous_y,Chef_x, Chef_y);
	    
	    if( (d2<=r*r && d3<=r*r) || (d1<=r*r && d3<=r*r) || 
	    (d2<=r*r && d1<=r*r) )
	    {
	        cout<<"yes\n";
	    }
	   
	    else
	    cout<<"no\n";
	    
	}
	
	return 0;
}
