/*
Tonmoy has a special torch. The torch has 
4
4 levels numbered 
1
1 to 
4
4 and 
2
2 states (
On
On and 
Off
Off). Levels 
1
,
2
,
1,2, and 
3
3 correspond to the 
On
On state while level 
4
4 corresponds to the 
Off
Off state.

The levels of the torch can be changed as:

Level 
1
1 changes to level 
2
2.
Level 
2
2 changes to level 
3
3.
Level 
3
3 changes to level 
4
4.
Level 
4
4 changes to level 
1
1.
Given the initial state as 
�
K and the number of changes made in the levels as 
�
N, find the final state of the torch. If the final state cannot be determined, print 
Ambiguous
Ambiguous instead.
*/
#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>> n>>k;
	    
	    if (k==0) //Off
	    {
	        if(n%4 == 0)
	        cout<<"Off"<<endl;
	        
	        else
	        cout<<"On"<<endl;
	        
	   
	    }
	    
	    
	    else if(k==1) //on or Ambiguous
	    {
	        if(n%4==0)
	        cout<<"On"<<endl;
	        
	        else
	        cout<< "Ambiguous"<<endl;
	    }
	    
	    
	}
	
	return 0;
}
