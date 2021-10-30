num = int(input())
mod = 1000000007

for i in range(num):
    n = int(input())
    m = (n - 1)//2
    result  = 4*((m*n*n) - (((m - 1)*m*16)//2) - ((8*m*(m - 1)*(m - 2))//3)) - (6*((n - 1)*(n + 1)//4)) + 1
    result = result % mod
    print(int(result))