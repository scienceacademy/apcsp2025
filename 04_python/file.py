file = "wordlist.txt"

words = []
with open(file) as f:  # open given file
    for line in f:
        words.append(line.strip())

print(words[1])
