#expression. a*cc+


inp = input('enter string: ')

flag = 0

for i in range(len(inp)-1):
    if inp[i] == 'a':
        for j in range(i+1,len(inp)-1):
            if inp[j] == 'c' and inp[j+1] == 'c': 
                flag = 1
            else:
                flag = 0
                break
    elif not inp[i] == 'a':
        if inp[i] == 'c' and inp[-1] == 'c':
            flag = 1
        elif len(inp) == 1:
            flag = 0
        else:
            flag = 0
            break
    else:
        flag = 0



if flag == 1:
    print('Given string is under the Regular expression: a*cc+ ')
else:
    print('Not found under the Regular expression: a*cc+ ')
