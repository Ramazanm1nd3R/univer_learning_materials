import re

def extractKeywords(text):
    keywords = ["import", "if", "else", "for", "while", "def", "class", "try", "except", "return", "and", "or", "not", "in", "is", "pass", "break", "continue"]
    pattern = r'\b(?:' + '|'.join(keywords) + r')\b'
    extractedkeywords = re.findall(pattern, text)
    return extractedkeywords

text = """
Пример программы на Python:
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
print(factorial(5))
"""
keywords = extractKeywords(text)
for keyword in keywords:
    print(keyword)
