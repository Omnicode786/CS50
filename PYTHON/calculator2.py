def get_int(prompt):
    while True:
        #since return is returning the finl value here it will work as a break of the loop
        try:
            return int(input(prompt))
        except ValueError:
            # print("Not an integer")
            pass

def main():
    x = get_int("x: ")
    y = get_int("y: ")
    print(x / y)


main()
