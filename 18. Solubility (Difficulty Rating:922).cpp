#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
      int to100Deg = 100 - x;
      int additionalSugar = b * to100Deg;
      int sugarPerMlin100Deg = a + additionalSugar;

	    cout << sugarPerMlin100Deg*10 <<endl;
	    
	}
	
	return 0;
}
