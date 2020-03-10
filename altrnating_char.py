t = int(input())
while t > 0:
    s = input()
    new = ''
    c=1
    for i in range(len(s)):
        if i == 0:
            new+=s[i]
        elif i!=0 and s[i] != s[i-1]:
            new+=str(c)
            c=1
            new+=s[i]
        elif s[i] == s[i-1] and new[-1] == s[i]:
            c+=1
    print(new)
    t-=1