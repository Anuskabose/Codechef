G = int(input())
while (G > 0):
    a, b = map(int, input().split())
    
    if (a >= b):
        print("Yes")
    else:
        print("No")
        
    G = G - 1    
