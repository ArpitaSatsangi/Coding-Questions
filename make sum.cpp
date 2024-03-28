#include <bits/stdc++.h>

vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
	sort(arr.begin(),arr.end());
	vector<pair<int,int>> ans;
	int s=0, e=arr.size()-1;

	while(s<e){
		if(arr[s]+arr[e]==target)
		{
			pair<int,int> sol = make_pair(arr[s], arr[e]);
			ans.push_back(sol);
			s++;
			e--;
		}
		else if(arr[s]+arr[e]<target)
			s++;
		else
			e--;

	}

		if(ans.size()==0)
		ans.push_back(make_pair(-1,-1));


	return ans;
	
} 
