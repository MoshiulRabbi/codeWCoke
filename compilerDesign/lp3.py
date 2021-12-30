#RABBI
#RRBBI
#RRB*BI
#RRB*B+I

#RRB*B+I* - Final exp

#Accepted->
#RRBI
#RRBBBBIII
#RRB
#RRBBBBB
#RRBBBII

#Rejected->

#XRBBII
#RBBBBF
#RRI
#RRBIIIIV
#RRVVXIII


inp = input('enter expression: ')

flag = 0

for i in range(len(inp)):
    if inp[i] == 'R' and inp[i+1] == 'R':
        if not inp[i+2] == 'B':
            flag = 0
            break
        if inp[i+2] == 'B':
            if inp[-1] == 'I' or inp[-1] == 'B':
                flag = 1
                break
            else:
                continue
        else:
            flag = 0
    else:
        flag = 0



if flag == 1:
    print('Given string is recognized under:  RRB*B+I* ')
else:
    print('Not recognized under: RRB*B+I* ')