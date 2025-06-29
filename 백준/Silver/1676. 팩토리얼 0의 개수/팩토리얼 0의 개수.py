N = int(input())
x = 1

for i in range(1,N+1):
  x *= i

x=str(x)
x=x[::-1]

count = 0
for i in x:
  if int(i)==0:
    count += 1
  else:
    break

print(count)