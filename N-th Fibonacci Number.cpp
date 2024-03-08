#include <bits/stdc++.h> 
int fibonacciNumber(int n){
    
    int f[n];
    f[1]=f[2]=1;
    for(int i=3;i<=n;i++)
    {
        f[i]=(f[i-1]+f[i-2]) % 1000000007;
    }

    return f[n];
}
