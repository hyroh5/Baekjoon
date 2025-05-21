N = int(input())

if '7' in str(N):
  if N%7 != 0:
    print(2)
  else:
    print(3)

else:
  if N%7 != 0:
    print(0)
  else:
    print(1)