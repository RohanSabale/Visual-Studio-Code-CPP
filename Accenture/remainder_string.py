def fun(s1,s2,k1,k2):
    s1  = s1[k1::]
    s2 = s2[k2::]
    if(len(s1)== 0 or len(s2)==0):
        return 0
    elif(s1==s2):
        return len(s1)
    else:
        return -1

k1 = int(input())
k2 = int(input())
s1 = input()
s2 = input()
result = fun(s1,s2,k1,k2)
print(result)