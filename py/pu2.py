l=[1,2]
s=2
for i in range(2,4000000):
    l.append(l[i-1]+l[i-2])
    if l[i]%2==0:
        s=s+l[i]
print (s)
