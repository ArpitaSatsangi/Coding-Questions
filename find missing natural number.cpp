#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
    int ans=-1,j=0,i=1, max;
    
    sort(arr, arr+n);

    if(arr[n-1]+1  <=0)
    {
        return 1; //handling if all elements are non positive
    }
    max=arr[n-1] +1 ;

    while(i<=max && j<n)
    {
        if(arr[j]<i)
        {
            j++;
        } else if (arr[j] == i) {
            i++;
            j++;
        }
         else {
            ans = i;
            break;
        }
    }

    if(ans==-1)
        return max;

    return ans;
}
