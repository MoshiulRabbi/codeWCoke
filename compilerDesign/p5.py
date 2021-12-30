
#remove special character from string

special_ch = '!@#$%^&*()_+=-[]\{}|;'

inp = input('Enter a string: ')

for i in inp:
    if i in special_ch:
        inp = inp.replace(i, '')

print(inp)
