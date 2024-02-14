#include <bits/stdc++.h> 


int boringFactorials(int n, int p)
{
	int ans=1;

	for(int i=2;i<=n;i++)
	{
		ans=(ans*i)%p;

	}

	return ans;
}
