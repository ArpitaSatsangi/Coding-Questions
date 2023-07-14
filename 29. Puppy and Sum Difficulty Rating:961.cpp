#include <iostream>
using namespace std;

int sum(int n)
{
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=ans+i;
    }
    return ans;
}

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int d,n,out=0;
	    cin>>d>>n;
	    
	    for(int i=0;i<d;i++)
	    {
	       n=sum(n);
	    }
	    
	    
	    cout<<n<<endl;
	}
	
	return 0;
}
