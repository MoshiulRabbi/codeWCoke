
#identify integer and float numbers from a given input text.

inp = 'There are 2 dummy and 150k each and one give 8.5 and another one 6.666'

fl_in = []

for i in inp:
    if i.isdigit():
        fl_in.append(i)
    elif i.isalpha():
        pass
    else:
        fl_in.append(i)
    

fl = "".join(fl_in)

for n in fl.split():
    if '.' in n:
        print(f'{n} is a float number')
    else:
        print(f'{n} is an integer number')
    
