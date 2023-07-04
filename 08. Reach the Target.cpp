/*
Problem
There is a cricket match going on between two teams A and B.

Team B is batting second and got a target of X runs. Currently, team B has scored Y runs. 
Determine how many more runs Team B should score to win the match.

Note: The target score in cricket matches is one more than the number of runs scored by the team that batted first.
*/

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    cout <<(x-y)<<endl;
	}
	
	return 0;
}
