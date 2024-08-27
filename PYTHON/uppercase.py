def main():
    before = input("Before: ")
    print("After: ", end = "")
    for c in before:
        print(c.upper(), end = "")
    print()
#or easier would be to simply
    before = "what you doing"
    after = before.upper()
    print(f"After: {after}")
    before = "hey bitch"
    print(f"After: {before.upper()}")

#you dont necessarily need the main function in python but it is recommended to define the main function nonethe less
main()
