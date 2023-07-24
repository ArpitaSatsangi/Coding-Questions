#include <bits/stdc++.h>
using namespace std;

int main() {
	
	double a, b;
	char c;
	
	cin>>a>>b>>c;
	
	if(c=='+')
	cout<<a+b <<endl;
	
	else if(c=='-')
	cout<<a-b <<endl;
	
	else if(c=='*')
	cout<<a*b <<endl;
	
	else if(c=='/')
	{
	    if(b==0)
	    cout<<"0" <<endl;
	    
	    else
	    cout<<fixed <<setprecision(7) << a/b <<endl;
	}
	
	
	
	return 0;
}
