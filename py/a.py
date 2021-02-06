ticket = 40

while (1):
    ticN = int(input("Enter number of tickets you want to buy: "))
     
    
    if ticN>10:
        print("You can’t buy more than 10 tickets")
        continue
    
    ticket = ticket - ticN
    
    if ticket <0:
    	print("No seats available for today")
    	break
  

    print(f"Here is your {ticN} Tickets")
