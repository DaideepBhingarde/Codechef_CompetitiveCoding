x = int(input())
for i in range(x):
    num = int(input())
    j = 1 
    while j<=num:
        a=j 
        j=j*2 
        
        
    b = (num - a) + 1 
    print(max((a//2),b))