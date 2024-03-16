#include <bits/stdc++.h> 
vector<vector<int>> findGoodMatrix(vector<vector<int>> &arr) 
{
    // Write your code here
    int n=arr.size();
    int m=arr[0].size();


    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==0)
            {
                for(int k=0;k<m;k++)
                {
                    if(arr[i][k]!=0)
                        arr[i][k]=-1;
                }

                for(int l=0;l<n;l++)
                {
                    if(arr[l][j]!=0)
                        arr[l][j]=-1;
                }
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == -1)
                arr[i][j] = 0;
        }
    }

    return arr;

}
