text = input()
score = 0

n1 = len(text)
score += n1

if ":" in text:
  n2 = text.count(":")
  score += n2

if "_" in text:
  n3 = text.count("_")
  score += n3*5

print(score)