a, b, n = map(int, input().split())
c, d, m = map(int, input().split())

#두 원의 반지름의 합 vs 두 원의 중심간의 거리

d1 = ((c-a)**2+(d-b)**2)**(1/2)
d2 = n+m

print('YES' if d1<d2 else 'NO')