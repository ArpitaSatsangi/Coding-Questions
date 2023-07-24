#include <iostream>
#include<bits/stdc++.h>
#include <cmath>
const int mod = 1e9+7;
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,Addy=0,Om=0,max_Addy=INT_MIN ,max_Om =INT_MIN;
	    cin>>n;
	    
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    cin>>b[i];//OM
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];//Addy
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        if(b[i])
	        {
	            Om++;
	            max_Om=max(max_Om,Om);
	        }
	        
	        else 
	        {
	            Om=0;
	        }
	    }
	    
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a[i])
	        {
	            Addy++;
	            max_Addy=max(max_Addy,Addy);
	        }
	        
	        else
	        {
	            Addy=0;
	        }
	    }
	    
	    
	    if(max_Addy>max_Om) 	        
	    cout<<"Addy"<<endl;
	    
	    else if(max_Addy<max_Om) 	    
	    cout<<"Om"<<endl;
	    
	    else 	                
	    cout<<"Draw"<<endl;

	}
	
	return 0;
}
