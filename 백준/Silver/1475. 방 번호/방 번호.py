N = input()
check = [0] * 9

for k in N:
  if k == '9':
    k = '6'
  check[int(k)] += 1

check[6] = (check[6]+1)//2

print(max(check))