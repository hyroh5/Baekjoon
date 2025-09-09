start, end = map(int, input().split())
page = end-start+1
shot = 0

if page%2 == 0:
  if start%2 == 0:
    shot += (page-2)//2+2
  else:
    shot += page//2
else:
    shot += (page-1)//2+1

print(shot)