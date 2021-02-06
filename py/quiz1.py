n = int(input())

N =[[0 for i in range(n)]for j in range(n)]
for i in range(n):
    N[i] [i] = 1
for i in range(n):
    for j in range(i+1,n):
        N[i] [j] = N[i] [j-1] + 1
        N[J][i] = N[j-1][i]+1

for i in range(n):
    x=str(N[i][j])
    sp = 4
    if j==0:
        sp-=1
    for k in range(sp-len(x)):
        B +=" "
    b+=x

print(s)