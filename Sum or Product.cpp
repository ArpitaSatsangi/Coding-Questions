#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{
	long long int ans;

	if(q==1)
	{
		ans=0;
        for (int i = 1; i <= n; i++) {
            ans += i;
        }
    }

    else if (q == 2) {
    	ans = 1;
        for (int i = 2; i <= n; i ++)
		{
			ans=(ans*i) % 1000000007;
		}

		
    }

	return ans;
}
