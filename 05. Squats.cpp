/*
Problem
Somu went to the gym today. He decided to do X sets of squats. Each set consists of 15 squats. Determine the total number of squats that he did today.

Input Format
The first line contains a single integerT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer X — the total number of sets of squats that Somu did.
Output Format
For each test case, output the total number of squats done by Somu.
*/

#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>> t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    cout<< (15*x)<<endl;
	}
	
	return 0;
}
