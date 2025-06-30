N = int(input())
count = 0

for k in range(1, N+1):
  validation = (2*N)/k-k+1   #validation = 2a
  if validation <= 0:    #2N/k 에서 결론적으로 부동소수점 오차 발생해서 의미 없음
    break
  if validation % 2 == 0:
    count += 1

print(count)