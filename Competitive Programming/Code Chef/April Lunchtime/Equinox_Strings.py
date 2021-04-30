# t = int(input())
# sh = 0
# an = 0

# ls = ['E', 'Q', 'U', 'I', 'N', 'O', 'X']
# while(t):
#     n, a, b = input().split(" ")
#     n = int(n)
#     a = int(a)
#     b = int(b)

#     while(n):
#         s = input()
#         if s[0] in ls:
#             sh += a
#         else:
#             an += b

#         n -= 1

#     if sh > an:
#         print("SARTHAK")
#     elif an > sh:
#         print("ANURADHA")
#     elif an ==sh :
#         print("DRAW")

#     t -= 1



t=int(input())
for i in range(t):
    n,a,b=list(map(int,input().split()))
    n1,n2=0,0
    for i in range(n):
        c=input()
        if(c[0] in 'EQUINOX'):
            n1+=a
        else:
            n2+=b
    if(n1==n2):
        print('DRAW')
    elif n1>n2:
        print("SARTHAK")
    else:
        print("ANURADHA")
