from cs50 import get_int, get_float, get_string

x = get_int("x: ")
y = get_int("y: ")

print(x+y)

#inputs are basically returning strings everytime we use them
x = input("x: ")
y = input("y: ")
print(x+y)
#now since both are strings + will concatenate the two strings here

x = int(input("x: "))
y = int(input("y: "))
#int float are actual functions in python instead of data types
print(x+y)

#if let's say someone has get_int function that colides so we can use this

#x = cs50.get_int("x: ")
#y = cs50.get_int("y: ")

#print(x+y)

if x < y:
    print("x is less than y")
elif x > y:
    print("x is greater than y")
else:
    print("x is equal to y")
