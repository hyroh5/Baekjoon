n, k, p = map(int, input().split())
bread = list(map(int, input().split()))

res = 0
for i in range(n):
  non = 0
  for j in range(k):
    if bread[i*k+j] == 0:
      non += 1
  if non < p:
    res += 1

print(res)