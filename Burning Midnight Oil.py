#4314087  Jan 09, 2023 09:10:00 AM       165B - Burning Midnight Oil     Python 3   Accepted    124 ms  0 KB

l = input().split(' ')
n, k = int(l[0]), int(l[1])
left, right = 1, n
while left != right:
    x = middle = (left + right) // 2
    sum = 0
    while x != 0:
        sum += x
        x //= k
    if sum >= n:
        right = middle
    else:
        left = middle + 1
print(left)
