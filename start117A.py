import math
for _ in range(int(input())):

    h,x,y,y2,k = map(int,input().split())
    gh = math.ceil(h/x)

    if y*k < h:
        lh = k + math.ceil((h-y*k)/y2)
    else:
        lh = k - ((y*k - h)//y)
    
    if gh<lh:
        print(gh)
    else:
        print(lh)

    
    t = int(input())
for i in range(t):
    H, X, Y1, Y2, k = map(int,input().split())
    from math import*
    gun = ceil(H/X)
    laser = k*Y1
    laser_t = ceil(H/Y1)
    a = int(laser_t)
    if laser<H:
        p = H - laser
        q = (p/Y2)
        total_l =int(a + q)
    else:
        total_l = a
    if total_l> gun:
        print(gun)
    else:
        print(total_l)