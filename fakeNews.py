s = input()
s = list(s)
cache = ['h','e','i','d','i']

for i in s:
    if(i not in cache):
        s = [i for i in s if i in cache]

s = "".join(s)
if(s.find('heidi')==-1):
    print("NO")
else:
    print("YES")