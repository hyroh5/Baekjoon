
N = int(input())
L = []

for _ in range(N):
  text = input()
  L.append(text)
  
valid = L[0]
new_valid = ''
for i in range(1,N):
  x = L[i]
  k=0
  for char in x:
    if char == valid[k]:
      new_valid += char
    else:
      new_valid += '?'
    k += 1
  valid = new_valid
  new_valid = ''
print(valid)