/*
Problem:-
On the occasion of World Blood Donor Day, Chef has organized an event to reward regular blood donars in Chefland.
If the donor has made less than or equal to 3 donations, they receive a BRONZE donor badge.
If the donor has made more than 3 but less than equal to 6 donations, they receive a SILVER donor badge.
If the donor has made more than 6 donations, they receive a GOLD donor badge.
Given that a person has made X donations, find the badge they receive.
*/

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int x;
	    cin>>x;
	    
	    if(x<=3)
	    cout<< "BRONZE"<<endl;
	    
	    else if(x<=6)
	    cout<< "SILVER" <<endl;
	    
	    else
	    cout<< "GOLD" <<endl;
	    
	}
	
	return 0;
}
