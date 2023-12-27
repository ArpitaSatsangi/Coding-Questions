#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        int currmax=arr[0], candy_count=0;
        
        for(int i=1;i<n;i++)
        {
            if(currmax > arr[i])
            {
                candy_count++;
            }    
                
            else
            {
                currmax=arr[i];
            }
        }
        
        
        cout<<candy_count<<endl;
        
    }
    
	return 0;
}
