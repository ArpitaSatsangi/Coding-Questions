#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	int i=0,odd=0,even=0;

	while(n!=0)
	{
		i=n%10;

		if(i%2==0)//even
		even+=i;

		else
		odd+=i;

		n=n/10;
	}

	cout<<even <<" "<<odd;
}
