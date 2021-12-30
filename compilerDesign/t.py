
def p1(st):

    leng = len(st)
    hn = len(st[::-1])
    RS = st[::-1]
    print("Length:", leng)
    print("Reverse: Length:", hn)
    print(f"Hello {st} , {RS} is your reverse")

    
inp = input("enter a string: ")
p1(inp)