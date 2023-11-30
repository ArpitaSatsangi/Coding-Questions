#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    for (int i = 1; i < n; i++) {
        string b, s = "";
        cin >> b;
        for (int p = 0; p < a.size(); p++) {
            for (int q = 0; q < b.size(); q++) {
                if (a[p] == b[q]) {
                    s += b[q];
                    b.erase(b.begin() + q, b.begin() + q + 1);
                    break;
                }
            }
        }
        a = s;
    }
    sort(a.begin(), a.end());
    if (a.length() == 0)
        cout << "no such string" << endl;
    else
        cout << a << endl;
    return 0;
}



/*#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	string ans="";
	
	vector<string> arr(n);
	for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	string first =arr[0];
	
	for(int i=1;i<n;i++)
	{
	    for(int x=0; x<first.length(); x++)
	    {
	        for(int y=0;y<arr[i].length(); y++)
	        {
	            if(first[x] == arr[i][y])
	            {
	                ans+=arr[i][y];
	               
                    arr[i].erase(arr[i].begin() + y, arr[i].begin() + y + 1);
                    break;
	            
	                
	            }
	        }
	    }
	    //first = ans;
    }
    
    sort(first.begin(), first.end());
    
	 if(first.length())
	    cout<<first<<endl;
	
	 else
	    cout<<"no such string"<<endl;
	    
	return 0;
}
*/
