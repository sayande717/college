tuple1 = (('a',23),('b',37),('d',11),('c',29))
tuple1 = tuple(sorted(list(tuple1),key=lambda x:x[1]))
print(tuple1)