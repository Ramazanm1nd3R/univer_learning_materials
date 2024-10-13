kaspiWallet = (
    ("фигня", 500),
    ("еда", 1200),
    ("еда", 700),
    ("фигня", 300),
    ("еда", 1200)
)

edusum, fignasum = 0, 0

for category, amount in kaspiWallet:
    if category == "фигня":
        fignasum += amount
    if category == "еда":
        edusum += amount

categories = {"еда": edusum, "фигня": fignasum}
maxCat = max(categories, key=categories.get)
minCat = min(categories, key=categories.get)

print(f"Максимальные расходы: {maxCat}, Минимальные расходы: {minCat}")

