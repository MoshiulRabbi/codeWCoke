#Write a c program for /*Multiple Line*/ Comment Detection.

inp = ''

while True:
    c = input()
    if c:
        inp+= c
    else:
        break

comnt = []
s = ''

for i in range(len(inp)):
    if inp[i] == '/' and inp[i+1] == '*':
        for j in range(i+2,len(inp)):
            if inp[j] == '*' and inp[j+1] == '/':
                comnt.append(inp[i+2:j])
                break
            else:
                continue

print(f'comment: {s.join(comnt)}')