squares = []
for i in range(10):
    squares.append(i*i)

squares = [i*i for i in range(10)]

evens = [i for i in range(20) if i % 2 == 0]

words = ["cat", "window", "apple", "the", "stupendous"]
long_words = [word for word in words if len(word) > 3]

prices = [10, 25, 30]
quantities = [2, 4, 3]
totals = [p * q for p, q in zip(prices, quantities)]

scores = [85, 52, 78, 65, 88]
grades = ["Pass" if score >= 70 else "Fail" for score in scores]

raw_data = "apple:3.99,banana:1.99,orange:2.49"
items = [item.split(":") for item in raw_data.split(",")]

emails = ["user@example.com", "invalid.email", "admin@foo.bar", "@broken.com"]
valid_emails = [email for email in emails if "@" in email and "." in email.split("@")[1]]
