flist = {
    'apple':12,
    'orange':11,
    'banana':2
}



fruits = input("add name of fruits: ")
price = input("add price of the fruit: ")


flist[fruits] = price


try:
    inp = input("search: ")
    p = flist[f"{inp}"]

    print(p)
except:
    print("Not in the list")


