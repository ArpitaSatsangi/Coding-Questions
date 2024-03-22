int search(vector<int>& arr, int n, int k)
{
    int low=0, high=n-1;
    while(low<=high)
    {
       int m=(high+low)/2;

       if(arr[m]==k)
        return m;

       if(arr[low]<=arr[m])
       {
           if(arr[low]<=k && k<=arr[m])
                high=m-1;
            else
                low=m+1;
       }
       else
       {
           if(arr[m]<=k && k<=arr[high])
                low=m+1;
            else
                high=m-1;
       }
    }

    return-1;
}
