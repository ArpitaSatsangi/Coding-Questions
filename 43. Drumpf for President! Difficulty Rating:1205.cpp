#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k,count=0;
	    cin>>n>>k;
	    
	    int a[n], b[n]={0},index;
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    //for(int i=0;i<=n;i++)
	    //b[i]=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        index=a[i];
	        b[index-1]++;//votes
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        if((b[i]>=k) && (a[i]!=i+1))
	        count++;
	        
	    }
	    
	    cout<<count<<endl;
	}
	
	return 0;
}

/*
Input-
2
3 2
2 1 2
2 1
1 2

Output-
1
0
  */
