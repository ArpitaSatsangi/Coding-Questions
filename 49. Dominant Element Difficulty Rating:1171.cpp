#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n, ans=false, max_count =0, count =0;
	    cin>>n;
	    
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	        
	   sort(a, a+n);
	   
	   for(int i =0;i<n; i++)
	   {
	       count++;
	       
	       if((a[i] != a[i+1]) || (i == n-1))
	       {
	           if(max_count < count)
	           {
	               max_count= count;
	               ans = true;
	           }
	           else if(max_count == count)
	           {
	               ans = false;
	           }
	           count =0;           
	       }
	  
	   }
	  
	   if(ans==true)
	    cout<<"YES\n";
	   else
	    cout<<"NO\n";
	   
	}
	
	return 0;
}
