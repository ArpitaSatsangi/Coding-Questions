#include <bits/stdc++.h> 
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
	int i=n-1, j=m-1, k=max(m,n), carry=0;
	vector<int> sum(k, 0);

	//k=k-1;//zero indexing
	k=k-1;
	while(i>-1&& j>-1)
	{
		
		int s=a[i]+b[j]+carry;
		sum[k]=s%10;
		carry=s/10;
		
		k--;
		i--;
		j--;
	}

	while(i>-1)
	{
		int s=a[i]+carry;
		sum[k]=s%10;
		carry=s/10;
		
		k--;
		i--;
	}

	while(j>-1)
	{
		int s=b[j]+carry;
		sum[k]=s%10;
		carry=s/10;
		
		k--;
	
		j--;
	}

	if(carry!=0)
	{
		sum.insert(sum.begin(), carry);
	}

	return sum;

}
