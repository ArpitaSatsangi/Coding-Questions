#include <bits/stdc++.h> 
vector<int> countEvenOdd(vector<int> &arr, int n)
{
	vector<int> ans(2,0);
	int odd=0;
	int even=0;

	unordered_map<int,int> freq;
	
	for (int i = 0; i < n; i++) {
      freq[arr[i]]++;
	}

    for (auto i=freq.begin(); i !=freq.end(); i++){
	if(i->second%2==0)//even
		even++;
	else
		odd++;	
	}

	ans[0]=odd;
	ans[1]=even;

    return ans;
}
