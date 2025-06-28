num = input()
digits = [int(d) for d in num]

digits.sort()
digits.reverse()

print(*digits, sep="")