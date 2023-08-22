#include <iostream>
#include <stack>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    string ans;
        stack<char> Stack;
        
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]== '(')
            {
                Stack.push(s[i]);
            }
            else if(s[i]==')')
            {
                while(Stack.top()!= '(')
                {
                    ans+= Stack.top();
                    Stack.pop();
                }
                Stack.pop();
            }
            else if(s[i] >= 'a' && s[i] <= 'z')
            {
                ans+=s[i];
            }
            else
            {
                Stack.push(s[i]);
            }
        }
	    cout<<ans<<endl;
	}
	
	return 0;
}
