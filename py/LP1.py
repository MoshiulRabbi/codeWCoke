positive = 0
neg = 0
/
for i in range(1,7):
    n = float(input())

    if(n>0):
        positive = positive+1
    elif(n<0):
        neg = neg + 1

print(f"Positive Number is {positive}")
print(f"Negative Number is  {neg}")