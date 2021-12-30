#print the interger and float value separately from a given list
# input: [1,2,3.4]
# output: integer: 1, 2
#         float: 3.4


def print_list(l):
    for i in l:
        if type(i) == int:
            print("integer:", i)
        elif type(i) == float:
            print("float:", i)
        else:
            print("invalid input")