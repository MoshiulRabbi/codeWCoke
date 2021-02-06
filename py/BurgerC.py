
BurgerCount = 0


while True:
    print(BurgerCount)
    print("Get An assignment ")

    print("I Agree to give a burger in return of this assignment")

    authcode = input("Enter authcode ")



    if authcode == "auth21211qa":
        
        BurgerCount+=1
        print(f"You owe me {BurgerCount} Burger")
    else:
        print("Enter Right code")    
