for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    b = []
    for i in range(n-1):
        if a[i] != a[i+1]:
            b.append(a[i])
            b.append(a[i+1])
            if i == n-1:
                b.append(a[i+1])
    print(b)