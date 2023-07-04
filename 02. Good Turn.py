# cook your dish here

T = int(input())

for i in range(T):


    X=int(input())
    X, Y = map(int, input().split(' '))
    
    if (X+Y) > 6:
        print("YES\n")
    else:
        print("NO\n")
    
    c=c+1
