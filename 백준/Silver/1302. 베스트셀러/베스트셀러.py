import sys

data = sys.stdin.read().splitlines()

n = int(data[0])
booklist = data[1:]
check = {}

for name in booklist:
  if name in check.keys():
    check[name] += 1
  else:
    check[name] = 1
 
max_val = max(check.values())
max_keys = [k for k, v in check.items() if v == max_val]

print(min(max_keys))