/*
Problem:-

Yeah, my receipts be lookin' like phone numbers
If it ain't money, then wrong number

In Chefland, a valid phone number consists of 5 digits with no leading zeros.
For example,  98765, 10000, and 71023 are valid phone numbers while 04123, 9231 and 872310 are not.
Chef went to a store and purchased N items, where the cost of each item is X.
Find whether the total bill is equivalent to a valid phone number.
*/



#include <iostream>
using namespace std;

int count_dig(int n,int x)
{
    int i=1,c=0;
    c=n*x;
    
    while(c/10)
    {
        c=c/10;
        i++;
    }
    
    return i;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    if( count_dig(n,x) ==5 )   //or     if( n*x >9999 && n*x <=99999) cout << "yes";
	    cout<<"YES"<<endl;
	    
	    else
	    cout<<"NO"<<endl;
	    
	}
	
	return 0;
}
