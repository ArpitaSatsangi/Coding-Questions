#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n,k;
	cin>>k>>n;
	
	string a[k], b[n];
	for(int i=0;i<k;i++)
	    cin>>a[i];
	    
	for(int i=0;i<n;i++)
	    cin>>b[i];
	
	
	for(int i=0;i<n;i++)
	{
	    string str=b[i];
	    bool found=false;
	    
	    
	    for(int j=0;j<k;j++)
	    {
	        if(str.find(a[j])!= string::npos)
	        {
	            found=true;
	            break;
	        }
	    }
	    
	    
	    if(str.length()>=47)
	    {
	        found=true;
	    }
	    
	    if (found) {
            cout << "Good" << endl;
        } else {
            cout << "Bad" << endl;
        }
	}
	
	return 0;
}
