#include <bits/stdc++.h> 
void rotate(vector<int>& arr, int n) {

    int temp[n];
    int k=1;

    temp[0]=arr[n-1];
    for(int i=0;i<n;i++)
    {
        temp[k++]=arr[i];
        
    }

    for(int i=0;i<n;i++)
        arr[i]=temp[i];
}
