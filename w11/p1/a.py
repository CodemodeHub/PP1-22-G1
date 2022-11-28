n = int(input())

dict = {}

for i in range(n):
    s = input()
    dict[s.split()[0]] = ' '.join(s.split()[1:])

x = int(input())

for i in range(x):
    t = input()
    for key, value in dict.items():
        if t in value:
            print(key)
            break
