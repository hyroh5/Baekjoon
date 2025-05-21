q = 0

for i in range(102):
  i = input()
  if i == '고무오리 디버깅 끝':
    if q == 0:
      print('고무오리야 사랑해')
    else:
      print('힝구')
    break
  elif i == '고무오리 디버깅 시작':
    continue
  else:
    if i == '문제':
      q += 1
    elif i == '고무오리' and q<1:
      q += 2
    elif i == '고무오리' and q>=1:
      q -= 1