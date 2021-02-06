


NumList = [1,2,3,4,5,6,7,8]
SearchingNum = 2

for i in range(len(NumList)):
    if NumList[i] == SearchingNum:
        print(f"Number {SearchingNum} found at index {i+1}")
        break
else:
    print(f"{SearchingNum} not found in the list")





