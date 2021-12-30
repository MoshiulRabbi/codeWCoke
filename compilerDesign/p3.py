inp = input("Enter a string: ")
count = 0

for i in inp:
    if i == ' ':
        count += 1
print('Number of spaces: ', count)
        