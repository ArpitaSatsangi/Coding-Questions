#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	string a;
    cin >> a;

	
	for (int i = 1; i < n; i++) 
	{
        string b, s = "";
        cin >> b;
	    
	    for(int x=0; x<a.length(); x++)
	    {
	        for(int y=0;y<b.length(); y++)
	        {
	            if(a[x] == b[y])
	            {
	                s+=b[y];
	                
	                b.erase(b.begin() + y, b.begin() + y + 1);
                    break;
                }
            }
        }
        a = s;
    }
    sort(a.begin(), a.end());
    if (a.length() == 0)
        cout << "no such string" << endl;
    else
        cout << a << endl;

	    
	return 0;
}
