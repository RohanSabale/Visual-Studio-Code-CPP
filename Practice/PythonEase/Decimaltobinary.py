def convertToBinary(n):
   if n > 1:
       convertToBinary(n//2)
   print(n % 2,end = '')


t=int(input())
for _ in range(t):
    dec=int(input())
    convertToBinary(dec)
    print