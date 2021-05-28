def sol():
    r,b,d = map(int, input().split())
    if(d==0):
        if(r==b):
            print("YES")
        else:
            print("NO")
    else:
        if((r+b)%d==0):
            print("YES")
        else:
            print("NO")
if __name__ == '__main__':
    tc = int(input())
    for i in range(tc):
        sol()