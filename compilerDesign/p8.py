
inp = ''
sc = []

while True:
    line = input()
    if line:
        inp += line
    else:
        break


for i in range(len(inp)-1):
    if inp[i] == '/' and inp[i+1] == '*':
        for j in range(i+2, len(inp)-1):
            if inp[j] == '*' and inp[j+1] == '/':
                sc.append(inp[i+2:j])
                break
            else:
                continue

for c in sc:
    print(f'comment: {c}')