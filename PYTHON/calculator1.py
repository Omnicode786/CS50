def main():
    x = int(input("x: "))
    y = int(input("y: "))
    z = x / y
    print(z)
    print(f"{z}")
    #floating point impricission is still a problem in python
    print(f"{z:.25f}")
main()
