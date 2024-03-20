#include <bits/stdc++.h> 
int flipBits(int* arr, int n) 
{
    int maxi=0,sum=0,c=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            c++;
            arr[i]=-1;       
        }
        else
        {
            arr[i]=1;
        }

    }


    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum<0)
            sum=0;
        if(sum>=maxi)
            maxi=sum;
    }

    return (c + maxi);
}
