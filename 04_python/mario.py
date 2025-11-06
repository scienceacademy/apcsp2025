while True:
    try:
        height = int(input("height: "))
    except ValueError:
        continue
    if height > 0 and height < 9:
        break

for i in range(1, height+1):
    print(" " * (height - i), end="")
    print("#" * i)
