#include <iostream>
using namespace std;

int main() {
    
    int n,h,x,t[1000],c=0;
    cin>>n>>h>>x;
    
    for(int i=0;i<n;i++)
        cin>>t[i];
    
    for(int i=0;i<n;i++)
    {
        if(x+t[i]==h)
        {
        cout<<"Yes"<<endl;
        c++;
        break;
        }
    }
    
    if(c==0)
    cout<<"No"<<endl;
	
	return 0;
}
