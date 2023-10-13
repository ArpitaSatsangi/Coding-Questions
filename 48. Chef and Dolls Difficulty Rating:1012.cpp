/*Chef is fan of pairs and he likes all things that come in pairs. 
He even has a doll collection in which the dolls come in pairs.
One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!
Help chef find which type of doll is missing..*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,ans =0;
	    cin>>n;
	    
	    int a[n];
	    for(int i =0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    
	    for(int i=0; i<n; i++)
	    {
	        ans=ans^a[i];
	    }
	    
	    cout<<ans<<endl;
	}
	
	return 0;
}
