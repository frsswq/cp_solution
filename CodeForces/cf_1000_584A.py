import sys
input = sys.stdin.readline
print = lambda x: sys.stdout.write(str(x) + '\n')

n, t = map(int, input().split())

digit = 1
for i in range(1, n):
    digit *= 10

max_range = digit * 10

digit = ((digit + t - 1) // t) * t

if digit < max_range:
    print(digit)
else:
    print(-1)