N = int(input())
count = 0

for k in range(1, N+1):
  validation = 2*N - k*(k-1)  #validation = 2ak
  if validation <= 0:
    break
  if validation % (2*k) == 0:
    count += 1

print(count)