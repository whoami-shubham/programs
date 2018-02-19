t=int(input())
d={'a':1, 'b':2, 'c':3, 'd':4, 'e':5, 'f':6, 'g':7, 'h':8, 'i':9, 'j':10, 'k':11, 'l':12, 'm':13, 'n':14, 'ng':15 , 'o':16, 'p':17, 'q':18, 'r':19, 's':20, 't':21, 'u':22, 'v':23, 'w':24, 'x':25, 'y':26, 'z':27}
for i in range(0,t):
    s=input().split()
    j=0
    k=0
    while j<len(s[0]) and k<len(s[1]):
        s1=d[s[0][j]]
        s2=d[s[0][k]]
        if s[0][j]=='n' and j+1<len(s[0]):
            if s[0][j+1]=='g':
                s1=d['ng']
                j=j+1
        if s[1][k]=='n' and k+1<len(s[1]):
            if s[1][k+1]=='g':
                s2=d['ng']
                k=k+1
        if s1>s2:
            print(1)
            break
        elif s1<s2:
            print(-1)
            break
        else:
            j=j+1
            k=k+1
