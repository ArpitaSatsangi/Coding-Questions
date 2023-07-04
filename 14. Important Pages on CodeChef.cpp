/*
Problem:-
MoEngage noticed that some users are not aware of the practice page on CodeChef, and some others are not aware of the rated contests on CodeChef. 
So, MoEngage wants to send an email to the users depending on which of the following groups they fall into:

1. If the user has never submitted on the practice page then send an email with the text:
https://www.codechef.com/practice
2. If the user has submitted on the practice page, but never participated in a contest then send an email with the text:
https://www.codechef.com/contests
3. If the user has submitted on the practice page as well as participated in a contest then send an email with the text:
https://discuss.codechef.com

so that they may discuss with other members of the community.
Help MoEngage by writing a program that takes as input two integers A and B where:
A=1 if the user has submitted on the practice page and 0 otherwise.
B=1 if the user has participated in a contest and 0 otherwise.

Output the appropriate link to be displayed in the email.
*/


#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	cin>>a>>b;
	
	if(a==0)
	cout<<"https://www.codechef.com/practice"<<endl;
	
	else if(b==0)
	cout<<"https://www.codechef.com/contests"<<endl;
	
	else
	cout<<"https://discuss.codechef.com"<<endl;
	
	return 0;
}
