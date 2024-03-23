#include <bits/stdc++.h> 
/*
	This is signature of helper function 'knows'.
	You should not implement it, or speculate about its implementation.

	bool knows(int A, int B); 
	Function 'knows(A, B)' will returns "true" if the person having
	id 'A' know the person having id 'B' in the party, "false" otherwise.
*/

int findCelebrity(int n) {
 	int ans=-1, j;
	bool k, c;

	 for(int i=0;i<n;i++)
	 {
		j=0;
		while(j<n)
		{
			if(i!=j)
			{
				k=knows(i,j);
				c=knows(j,i);

				if(c==true && k==false)
				{
					//celebrity
					ans=i;
				}
				else
				{
					break;
				}
			}
			j++;
		 }
	 }


	return ans;
}
