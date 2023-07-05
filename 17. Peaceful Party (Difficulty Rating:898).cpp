/*
The mayor of your city has decided to throw a party to gather the favour of his people in different regions of the city.
There are 3 distinct regions in the city namely A, B, C comprising of different number of people.
However, the mayor knows that people of the region B are in conflict with people of regions A and C. 
So, there will be a conflict if people from region B are present at the party along with people from region A or C.
The mayor wants to invite as many people as possible and also avoid any conflicts. Help him invite maximum number of people to the party.
*/


#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int a,b,c,ans;
        cin>>a>>b>>c;
        
        if((a+c)>b)
        ans = a+c;
        
        else
        ans= b;
        
        cout<<ans<<endl;
    }
    
	return 0;
}
