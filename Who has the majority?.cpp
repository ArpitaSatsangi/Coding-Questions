//{ Driver Code Starts
//Initial Template for C

#include <stdio.h>


// } Driver Code Ends
//User function Template for C

// Function to find element with more appearances between two elements in an
// array.
int majorityWins(int arr[], int n, int x, int y) {
 
    int x_c=0,y_c=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        x_c++;
        
        else if(arr[i]==y)
        y_c++;
        
        
    }
    
    if(x_c==y_c)
    {
        if(x>y)
        return y;
        
        else
        return x;
    }
    
    else if(x_c>y_c)
    return x;
    
    else
    return y;
}

//{ Driver Code Starts.
int main() {

    int t; // Testcases
    scanf("%d", &t); // Input the testcases
    while (t--) // Until all testcases are exhausted
    {
        int n; // Size of array
        scanf("%d", &n); // Input the size
        int arr[n]; // Declaring array of size n
        for (int i = 0; i < n; i++) // Running a loop to input all elements of arr
            scanf("%d", &arr[i]);

        int x, y; // declare x and y
        scanf("%d%d", &x, &y); // input x and y
        printf("%d\n", majorityWins(arr, n, x, y)); // calling the function that you complete
    }

    return 0;
}
// } Driver Code Ends
