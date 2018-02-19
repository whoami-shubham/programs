t=int(input())
d={'a':0, 'b':1, 'c':2, 'd':3, 'e':4, 'f':5, 'g':6, 'h':7, 'i':8, 'j':9, 'k':10, 'l':11, 'm':12, 'n':13, 'ng':14 , 'o':15, 'p':16, 'q':17, 'r':18, 's':19, 't':20, 'u':21, 'v':22, 'w':23, 'x':24, 'y':25, 'z':26}
for i in range(0,t):
    l=input().split()
    count1=0
    count2=0
    j=0
    k=0
    while j<len(l[0]):
        if l[0][j]=='n' and j+1<len(l[0]):
            if l[0][j+1]=='g':
                count1=count1+d['ng']
                j=j+2
        if j<len(l[0]):
            count1=count1+d[l[0][j]]
            j=j+1
    print(count1)
    while k<len(l[1]):
        if l[1][k]=='n' and k+1<len(l[1]):
            if l[1][k+1]=='g':
                count2=count2+d['ng']
                k=k+2
        if k<len(l[1]):
            count2=count2+d[l[1][k]]
            k=k+1
    print(count2)
    if count1==count2:
        print(0)
    elif count1>count2:
        print(1)
    else:
        print(-1)
    count1=0
    count2=0
