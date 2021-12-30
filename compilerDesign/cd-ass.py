#find the digit in given string
# string = "there are 20 and 50 and 1 cow"

def find_digit(string):
    for i in range(len(string)):
        if string[i].isdigit():
            return string[i]
    return None

print(find_digit("there are 20 and 50 and 1 cow"))