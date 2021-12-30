#c+ab*

#accepted->
#cab
#cccabbbb-
#ca
#ccca

#rejected->

inp = input('Enter String: ')

flag = 0

for i in range(len(inp)-1):
    if inp[i] == 'c':
        if inp[-1] == 'a' and not inp[-2] == 'a':
            flag = 1
            print('oo')
            break
        for j in range(i+1,len(inp)-1):
            if inp[j] == 'a' and not inp[-2] == 'a':
                flag = 1
                print('qq')
            if inp[-1] == 'a' and not inp[-2] == 'a':
                flag = 1
                print('dd')
                break
            
            if inp[j] == 'a' and inp[-1] == 'b' and not inp[-2] == 'a':
                flag = 1
                print('ss')
                break
            else:
                continue
    # else:
    #     flag = 0




if flag == 1:
    print('Found')
else:
    print('Not found')