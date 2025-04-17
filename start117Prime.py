for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    ans =[]
    if n== 1 or n == 2:
        print(-1)
    else:
        if n%2 == 1:
            for i in range(n):
                ans.append(n-l[i]+1)
        else:
            for i in range(n):
                if l[i] == n:
                    ans.append(n)
                else:
                    ans.append(n-l[i])
                
        print(ans)