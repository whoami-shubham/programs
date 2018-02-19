A = [int(x) for x in input().split()]
def plusOne( A):
    if len(A)>0:
        if A[-1] !=9:
            A[-1]=A[-1]+1
            return A
        else:
            A[-1]=0
            j=len(A)-2;
            carry=1;
            firstd=A[0]
            for i in range(1,len(A)):
                if A[j]+ carry <=9:
                    A[j]=A[j]+carry
                else:
                    A[j]=A[j]+carry
                    carry=A[j]/10
                    A[j]=A[j]%10
                    j=j-1
                if i==len(A)-1:
                    if firstd+ carry>9:
                        fd=(firstd+carry)/10
                        A.insert(0,fd)


plusOne(A)
print(A)
