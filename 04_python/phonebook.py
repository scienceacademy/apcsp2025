# people = [
#     {"name": "Alice", "number": "232323523"},
#     {"name": "Bob", "number": "232323523"},
#     {"name": "Charlie", "number": "232323523"}]

people = {
    "Alice": "324923523",
    "Bob": "23423523",
    "Charlie": "234235"
}

name = input("Name: ")

if name in people:
    print(people[name])
