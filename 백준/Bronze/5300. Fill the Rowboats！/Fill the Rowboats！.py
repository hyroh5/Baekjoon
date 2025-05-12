N = int(input())

num = 0

for _ in range(N):
  num += 1
  if num%6 == 0:
    print(num, end=" ")
    print("Go!", end=" ")
  elif N == num:
    print(num, end=" ")
    print("Go!")
  else:
    print(num, end=" ")