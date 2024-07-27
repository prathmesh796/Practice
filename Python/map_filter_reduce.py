# MAP

l = [2, 4, 6, 8, 10]
m = list(map(lambda x: x*x, l))
print(m)

# FILTER

l2 = [1, 3, 5, 7, 9, 11]
f = list(filter(lambda x: x > 3, l2))
print(f)

# REDUCE

from functools import reduce

l3 = [1, 2, 3, 4, 5, 6, 7]
r = reduce(lambda x, y: x + y, l3)
print(r)