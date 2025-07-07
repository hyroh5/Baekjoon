N = input()
check = {0: 0, 1: 0, 2: 0, 3: 0, 4: 0, 5: 0, 6: 0, 7: 0, 8: 0}

for k in N:
  t = int(k)
  if t == 9:
    t = 6
  check[t] += 1

if check[6]%2 == 0:
  check[6] = check[6]//2
else:
  check[6] = check[6]//2 + 1

req_set = max(check.values())
print(req_set)