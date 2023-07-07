#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    int first = int(s[0] - 48) ;
	    int second = int(s[1] - 48);
	    int third = int(s[3] - 48);
	    int fourth = int(s[4] - 48);
	    
	    int ans1 = 10*first + second;
	    int ans2 = 10*third + fourth;
	    
	  
	    if (ans1<=12 && ans2<=12)
	    cout << "BOTH" <<endl;
	    
	    else if(ans2>12)
	    cout << "MM/DD/YYYY" <<endl;
	    
	    else if( ans1>12)
	    cout << "DD/MM/YYYY" <<endl;
	    
  
	    
	}
	
	return 0;
}
