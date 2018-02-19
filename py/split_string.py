def split_string(source,splitlist):
    ans=[]
    issplit=True
    for char in source:
        if char in splitlist:
            issplit=True
            ans.append(char)
        else:
            if issplit:
                ans.append(char)
                issplit=False
            else:
                ans[-1]=ans[-1]+char
    return ans
print (split_string("This is. a test-of the,string seperation code!","' '!.-"))
