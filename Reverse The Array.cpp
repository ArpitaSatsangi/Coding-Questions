void reverseArray(vector<int> &arr , int m)
{
    int s=arr.size();

    m=m+1, s=s-1; //indices
    while(m<=s)
    {
        swap(arr[m++], arr[s--]);
    }
}
