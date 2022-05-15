def check(t):
    return all(i == t[0] for i in t)

tuple1 = (45,45,45,45)
print(check(tuple1))