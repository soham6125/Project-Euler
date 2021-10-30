array = [1,1]
pro = 1
for i in range(2,1001):
    pro = pro * i
    sum = 0
    for j in str(pro):
        sum = sum + int(j)
    array.append(sum)
    
for _ in range(int(input())):
    n = int(input())
    ans = array[n]
    print(ans)