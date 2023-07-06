/*
Kepler’s Law states that the planets move around the sun in elliptical orbits with the sun at one focus. 
Kepler's 3rd law is The Law of Periods, according to which:
The square of the time period of the planet is directly proportional to the cube of the semimajor axis of its orbit.
You are given the Time periods (t1,t2) and Semimajor Axes (r1,r2) of two planets orbiting the same star.
Please determine if the Law of Periods is satisfied or not, i.e, if the constant of proportionality of both planets is the same.
Print "Yes" (without quotes) if the law is satisfied, else print "No".
*/


#include <iostream>
#include <math.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    
	    if( (pow(t1,2) * pow(r2,3))==(pow(t2,2) * pow(r1,3)) )
	    cout<<"Yes"<<endl;
	    
	    else
	    cout<<"No"<<endl;
	}
	
	
	return 0;
}
