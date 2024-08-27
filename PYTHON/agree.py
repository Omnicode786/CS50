s = input("Do you agree? ")

if s == "Y" or s == "y":
    print("Agreed")
elif s == "N" or s == "n":
    print("Not Agreed")
else:
    print("Enter valid data")

t = input("Do you want to go?")
if t in ["y", "yes", "Y", "Yes"]:
    print("Alright Hop in")
elif t in ["n", "no", "N", "No"]:
    print("Okay Fine by me")
p = input("Do you want to go to park?")
#p = p.lower()
if p in ["y", "yes"]:
    print("Great")
elif p in ["n", "no"]:
    print("Oh Shoot")
