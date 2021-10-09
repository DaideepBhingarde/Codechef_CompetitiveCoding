# cook your dish here
s = int(input())
while(s):
    x,y = map(int, input().split( ))
    difference = abs(abs(x)-abs(y))
    if(difference%2!=0):
        print("NO")
    else:
        print("YES")
    s-=1    
            
