from cs50 import get_string
def main():
    names = []
    n = int(input("How many names you want to enter: "))
    for i in range(n):
        name = input("Name: ")
        names.append(name)
    find = input("Enter the name you want to find: ")

    for name in names:
        if name == find:
            print("Found")
            break
    #in python even for loops can have else clause
    else:
        print("Not Found")
main()
