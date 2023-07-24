#include <iostream>
using namespace std;

char encoding(char ch)
{
    int i,j;
    char a;
    for (i=97, j=122;i<=122,j>=97 ;i++,j--)//ascii values:- a=97,z=122
    {
        if(ch==i)
        a=j;
        
        else if(ch==j)
        a=i;
    }
//    cout<<"ch printing:  "<<endl;
//    cout<<a<<endl;
   return a;
}


int main() {
	
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;


/*
Swap the first and second character of the string S, then swap the 3rd and 4th character, 
then the 5th and 6th character and so on. If the length of S is odd, the last character should not be swapped with any other.
*/
	    for(int i=0; i<n-1; i=i+2)
	    {
	        swap(s[i], s[i+1]);
	    }


    /*
    Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z', 
    each occurrence of 'b' by 'y', each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message obtained after the first step by 'a'.
      */
	    for(int i=0; i<n;i++)
	    {
	        s[i]=encoding(s[i]);
	    }
	    
	    cout<<s<<endl;
	    
	}
	
	return 0;
}


