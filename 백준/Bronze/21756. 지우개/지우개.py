n = int(input())

vec = [i+1 for i in range(n)]

while len(vec) > 1:
  count = 0
  l = len(vec)
  for k in range(l):
    if k%2 == 0:
      vec.pop(k-count)
      count += 1

print(*vec)