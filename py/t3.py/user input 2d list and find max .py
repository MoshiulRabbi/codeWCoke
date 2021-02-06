
n = int(input("How many rows?: ")) 
a = []
for i in range(n):
    print("Enter elemnt sperate by space: ")
    a.append([int(j) for j in input().split()])


print("The max element is")
print(max(max(x) for x in a))





