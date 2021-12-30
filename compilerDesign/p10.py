#Write a program that can create a Syntax table from a sentence.
#(Letter, digits, symbol, arithmetic/logical operation)

sym = {'@','#','$','^','(',')','{','}',}
arth = {'+', '-', '*', '/', '%', '**', '//','='}
logical_op = {'and', 'or', 'not','<', '>', '<=', '>=', '==', '!=', '!'}

inp = 'A sentence  with syntax @ table * with a + b = 100 not ! { } '

l = ''
d = ''
s = ''
a = ''
lo = ''

inp_s = inp.split()

for word in inp_s:
    if word in arth:
        a += word
    elif word in sym:
        s += word
    elif word in logical_op:
        lo += word
    elif word.isascii:
        if word not in sym and word not in arth and word not in logical_op and not word.isdigit():
            l += word
    
    try:
        bc = int(word)
        d += word
    except:
        pass

    

print(f'symbol: {s}')
print(f'arithmatic: {a}')
print(f'letter: {l}')
print(f'logical: {lo}')
print(f'digit: {d}')

