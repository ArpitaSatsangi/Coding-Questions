#include <bits/stdc++.h>
vector<int> addOneToNumber(vector<int> arr) {
  int n = arr.size();
  vector<int> ans(n);
  
  int carry=1;
  

  for(int i=n-1; i>=0;i--)
  {

      int sum=arr[i]+carry;
    
      ans[i]=(sum%10);

      carry=sum/10;
      
  }


  if(carry)
  {
      ans.insert(ans.begin(),carry);
  }

  while(!ans.empty() && ans[0] == 0) {
        ans.erase(ans.begin());
    }

  return ans;
}
