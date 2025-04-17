for _ in range(int(input())):
    n = int(input())
    s = input()
    j = 0
    m = s[0]
    for i in range(n-1):
        if ord(s[i+1])<ord(s[i]):
            j = i

            break
        else:
            j = n-1
    if j == n-1:
        print(s[:n-1])
    else:
       
        ans = s[:j]+s[j+1:]
        print(ans)