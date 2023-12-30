#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   
   vector<vector<int>> ans;

   vector<int>a=arr;
   sort(a.begin(),a.end());

   for(int i=0;i<a.size(); i++)
   {
      for(int j=i+1;j<a.size(); j++)
      {
         if(a[i]+a[j]==s)
         {
            vector<int> pair;

            pair.push_back(a[i]);
            pair.push_back(a[j]);

            ans.push_back(pair);
            pair.empty();
   
         }
      }

      
   }

   return ans;
}
