#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	
	vector<int> freq(n,0);
	for(int i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}

	for(int i=0;i<n;i++)
	{
		if(freq[i]>1)
		{
			return i;
		}
	}
}
