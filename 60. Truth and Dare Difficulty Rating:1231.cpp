#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int tr, dr, ts, ds;
	    
	    cin>>tr;
	    int TR[tr];
	    for(int i=0;i<tr;i++)
	        cin>>TR[i];
	    
	    
	    cin>>dr;
	    int DR[dr];
	    for(int i=0;i<dr;i++)
	        cin>>DR[i];
	        
	    cin>>ts;
	    int TS[ts];
	    bool TS_flag[ts];
	    
	    for(int i=0;i<ts;i++)
	    {
	        cin>>TS[i];
	        TS_flag[i]=false;
	    }
	        
	        
	    cin>>ds;
	    int DS[ds];
	    bool DS_flag[ds];
	    for(int i=0;i<ds;i++)
	    {
	        cin>>DS[i];
	        DS_flag[i]=false;
	    }   
	        
	        
	     bool flag=true;
	     
	     for(int i=0;i<ts;i++)
	     {
	         for(int j=0;j<tr;j++)
	         {
	             if(TS[i]==TR[j])
	             {
	                 TS_flag[i]=true;
	                 //break;
	             }
	         }
	     }
	     
	     for(int i=0;i<ds;i++)
	     {
	         for(int j=0;j<dr;j++)
	         {
	             if(DS[i]==DR[j])
	             {
	                 DS_flag[i]=true;
	                 //break;
	             }
	         }
	     }
	     
	     for(int i=0;i<ts;i++)
	     {
	         if(TS_flag[i]!=true)
	         {
	             flag=false;
	             break;
	         }
	     }
	     
	     for(int i=0;i<ds;i++)
	     {
	         if(DS_flag[i]!=true)
	         {
	             flag=false;
	             break;
	         }
	     }
	     
	     if(flag){
	         cout<<"yes"<<endl;
	     }else{
	         cout<<"no"<<endl;
	     }
	     
	    
	}
	
	
	return 0;
}
