# Nov 18, 2022 11:28:00 AM      110B - Lucky String     Python 3   Accepted     124 ms  0 KB
n = int(input())
s = "abcd" * (n // 4) + "abcd"[0 : n % 4]
print(s)
