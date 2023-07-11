#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int saint[3], hero[3];
	    
	    int a_one=0, b_one=0;
	    
	    for(int i=0;i<3;i++)
	    {
	        cin>>saint[i];
	        if(saint[i]==1)
	        {
	            a_one+=1;
	        }
	    }
	    
	    for(int i=0;i<3;i++)
	    {
	        cin>>hero[i];
	        if(hero[i]==1)
	        {
	            b_one+=1;
	        }
	    }
	    
	    
	    /*
	    int a1,a2,a3;
	    cin>>a1>>a2>>a3;
	    
	    int b1,b2,b3;
	    cin>>b1>>b2>>b3;
	    
	    int a_one=0, b_one=0;
	    
	    if(a1==1)
	    a_one+=1;
	    if(a2==1)
	    a_one+=1;
	    if(a3==1)
	    a_one+=1;
	    
	    if(b1==1)
	    b_one+=1;
	    if(b2==1)
	    b_one+=1;
	    if(b3==1)
	    b_one+=1;
	    */
	    
	    if(a_one==b_one)
	    cout<<"Pass"<<endl;
	    
	    else
	    cout<<"Fail"<<endl;

	}
	
	return 0;
}


