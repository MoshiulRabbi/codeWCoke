

#def function example
def sum(a,b):
    return a+b


def square(a):
    return a**2


#Multiple parameter
def maxi(a,b,c):
    if a>b and a>c:
        print(f"{a} is maximum")

    elif b>a and b>c:
        print(f"{b} is maximum")
    
    else:
        print(f"{c} is maximum")



#default parameter
def check(a=0):
    if a == 0:
        print("Zero")
    elif a>0:
        print("Positive Number")
    else:
        print("Negative")


print(sum(2,4))

print(square(3))

check(0)
