#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X, Y, i;
	cin >> T;
	
	for (i=0;i<T;i++)
	{
	    cin >> X >> Y;
	    if(X+Y > 6)
	    {
	        cout << "YES"<<endl;
	    }
	    else
	    {
	        cout << "NO"<<endl;
	    }
	}
	
	return 0;
}
