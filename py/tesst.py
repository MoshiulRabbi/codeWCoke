R = int(input("Enter rows"))
C = int(input("Enter coloumb"))

max = 0

print("Enter single line sep by space")

entries = list(map(int, input().split()))

matrix = np.array(entries).reshape(R,C)

print(matrix)