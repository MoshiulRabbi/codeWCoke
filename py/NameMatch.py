name_data = ['eternal','rabbi','mh']

input_name = input("Enter name to check in the database: ")

start = True

if start:
    for name in name_data:
        if name == input_name:
            print("Found !")
            break
        else:
            print("Name not found")
            new_name = input("Do you want to add this name? y/n ")
            if new_name == 'Y':
                name_data.append(input_name)
                print(f"Name {input_name} added")
                i = input("Enter Y to show the data: ")
                if i == 'Y':
                    for name in name_data:
                        print(name)
                    break



