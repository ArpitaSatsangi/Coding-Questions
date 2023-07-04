/*
Problem
Chef wants to appear in a competitive exam. 
  
To take the exam, there are following requirements:
Minimum age limit is X (i.e. Age should be greater than or equal to X).
Age should be strictly less than Y.
Chef's current Age is A. 
Find whether he is currently eligible to take the exam or not.
*/



#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--)
	{
	    int x,y,a;
	    cin >>x>>y>>a;
	    
	    if (x<=a && a<y)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	
	return 0;
}
