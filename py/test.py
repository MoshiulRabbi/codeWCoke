
x = int(input("X: "))
y = int(input("Y: "))
result = 0
contain = 0
while contain != y:
   if x % 2 == 0:
      x += 1
   else:
     contain += 1
     result += x
     x += 1

print(result)