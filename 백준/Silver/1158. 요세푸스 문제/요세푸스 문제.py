n, k = map(int, input().split())

circle = [i for i in range(1,n+1)]
pl = []

t = k-1
while True: # 여기 로직 순서가 뭔가 이상함
  x = circle.pop(t)
  pl.append(x)
  cl = len(circle)
  if cl == 0:
    break
  else:
    t = (t+k-1)%cl

print('<', end='')
for i in pl:
  if i != pl[-1]:
    print(i, end=", ")
  else:
    print(i, end='>\n')