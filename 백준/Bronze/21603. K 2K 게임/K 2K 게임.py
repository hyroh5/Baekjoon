n, k = map(int, input().split())
l = []

for x in range(1,n+1):
  if k%10 != x%10:
    if (2*k)%10 != x%10:
      l.append(x)
print(len(l))
print(*l)