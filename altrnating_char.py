t = int(input())
while t > 0:
    s = input()
    new = ''
    for i in range(len(s)):
        if i == 0 or  s[i] != s[i-1]:
            new+=s[i]
        elif s[i] == s[i-1]:
            continue
    print(new)
    t-=1