#include <iostream>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,ans=0;
	    cin>>n;
	    
	    vector<int> p(n);
	    vector<int> s(n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>p[i]>>s[i];
	    }
	    
	    vector<int> score(12);
	    for(int i=0;i<n;i++)
	    {
	        score[p[i]] = max(score[p[i]], s[i]);
	    }
	    
	    for(int i=1;i<=8;i++)
	    {
	        ans = ans+score[i];
	    }
	    
	    cout<<ans<<endl;
	    
	}
	
	return 0;
}
