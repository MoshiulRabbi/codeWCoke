#Global
a = "This a is from Global"
b = "This is from Global"

def LocalGlobalTest():
    print(a)
    c = "C is from Local variable"
    b = "b is from Local variable"
    print(f"{c}")


LocalGlobalTest()
print(b)
