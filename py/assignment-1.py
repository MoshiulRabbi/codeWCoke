max = 0
index_of_max = -1
element = -1
len = 1

while element != 0:
    element = int(input())
    if element > max:
        max = element
        index_of_max = len
        len += 1
        print(index_of_max)