def main():
    # people = [
    #     {
    #         "name": "Muzammil", "number": "03402211076"
    #     },
    #     {
    #         "name": "Mansoor", "number": "03482569504"
    #     },
    # ]
    # to do things tiduly we can shorten this but this acan be only for phonebook type things
    people = {
        "Muzammil": "03402211076",
        "Mansoor": "03482569504",
    }
    name = input("Name: ")
    # for person in people:
    #     if person["name"] == name:
    #         number = person["number"]
    #         print(f"Found with number {number}")
    #         break
    # else:
    #     print("Not Found")
    if name in people:
       number = people[name]
       print(f"Found with number {number}")
    else:
       print("Not Found")


main()
