#include <bits/stdc++.h> 
vector<int> Klargest(vector<int> &a, int k, int n) {
    vector<int> ans;

    sort(a.begin(), a.end());

    for(int i=n-k; i<n; i++)
    {
        ans.push_back(a[i]);
    }
    return ans;
}
