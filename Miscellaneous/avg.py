import math
n = int(input())
sum = 0

A = list(map(int, input().split()))
for i in range(0, n):
    sum = sum+A[i]

print(math.floor(sum/n))
