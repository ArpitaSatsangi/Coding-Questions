#include <bits/stdc++.h> 
class NumArray
{

    private:
    // Initialize here.
    vector<int> &arr;
    int n;
public:

    
    NumArray(vector<int> &arr, int n):arr(arr), n(n)
    {
        //this->arr=arr;
       // this->n=n;
    }

    // Update operation.
    void update(int l, int r, int val)
    {
        for (int i = l - 1; i <= r - 1; i++) {
            arr[i] += val + (i - l + 1);
        }
    }

    // Return the sum of subarray arr[l..r].
    long long rangeSum(int l, int r)
    {
        long long sum =0;
        for (int i = l - 1; i <= r - 1; i++) {
            sum += arr[i];
        }
        return sum;
    }
};
