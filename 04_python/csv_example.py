import csv

name = input("name: ")

with open("phonebook.csv") as file:
    reader = csv.DictReader(file)
    for row in reader:
        if row["name"] == name:
            print(row["number"])
            exit()
print("not found")
