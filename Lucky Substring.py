#  Nov 18, 2022 11:28:00 AM		 122B - Lucky Substring	 Python 3	Accepted	62 ms	100 KB

s = input()
count4 = count7 = 0
for c in s:
    if c == '4':
        count4 += 1
    elif c == '7':
        count7 += 1
if count4 == 0 and count7 == 0:
    print(-1)
elif count4 >= count7:
    print(4)
else:
    print(7)
