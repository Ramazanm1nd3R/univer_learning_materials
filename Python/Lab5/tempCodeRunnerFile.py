words = ['d@ll', 'b@ll', 'go@l', 'f@ll', '@mb@ss@dor', 'c@pit@l']
new_words = list(map(lambda word: word.replace('@', 'a'), words))
print(new_words)