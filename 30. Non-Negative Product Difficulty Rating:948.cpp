#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,a[10000],count=0,ans=0,flag=0;
        cin>>n;
        
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        for(int i=0;i<n;i++)
        {
            if(a[i]<0)
            count++;
            
            else if(a[i]==0)
            flag++;
        }
        
        if(count%2==0 || flag!=0)
        cout<<"0"<<endl;
        
        else
        cout<<"1"<<endl;


    }
	
	return 0;
}
