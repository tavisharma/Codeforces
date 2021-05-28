def sol():
    n = int(input())
    li = list(map(int, input().split()))
    result = 0
    for i in range(0,n):
        for j in range(i,n+1):
            temp = li[i::j+1]
            cache = set(temp)
            for i in cache:
                if(temp.count(i)>1):
                    result += temp.count(i)
                    print(temp)
    print(result)
if __name__ == '__main__':
    testCase = int(input())
    while(testCase):
        sol()
        testCase-=1