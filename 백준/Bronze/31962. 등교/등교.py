n, x = map(int, input().split())
bus = []

for _ in range(n):
  s, t = map(int, input().split())
  
  if (s + t <= x):
    bus.append(s)

if(bus):
  print(max(bus))
else:
  print(-1)