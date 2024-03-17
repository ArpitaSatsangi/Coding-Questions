#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int maxi,mini;

	if(n%2==0)
	{
		//even
		if(arr[0]>arr[1])
		{
			maxi=arr[0];
			mini=arr[1];
		}
		else
		{
			maxi=arr[1];
			mini=arr[0];
		}

		for(int i=2;i<n;i+=2)
		{
			if(arr[i]<arr[i+1])
			{
				mini=min(mini,arr[i]);
				maxi=max(maxi,arr[i+1]);
			}
			else
			{
				mini=min(mini,arr[i+1]);
				maxi=max(maxi,arr[i]);
			}
		}

	}
	else
	{
		//odd
		mini=arr[0];
		maxi=arr[0];

		for(int i=1;i<n;i+=2)
		{
			if(arr[i]<arr[i+1])
			{
				mini=min(mini,arr[i]);
				maxi=max(maxi,arr[i+1]);
			}
			else
			{
				mini=min(mini,arr[i+1]);
				maxi=max(maxi,arr[i]);
			}
		}
	}

	return (mini+maxi);
}
