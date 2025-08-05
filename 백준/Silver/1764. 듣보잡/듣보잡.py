import sys
input = sys.stdin.readline

n, m = map(int, input().split())

non_hear = set(input().strip() for _ in range(n))
non_see = set(input().strip() for _ in range(m))

result = sorted(non_hear & non_see)

print(len(result))
for name in result:
    print(name)