#1
import re

def findEmails(text):
    emailPattern = r'\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\.[A-Z|a-z]{2,}\b'
    emails = re.findall(emailPattern, text)
    return emails

# Example text
text = """
Электронная почта — 
это важная часть нашей повседневной жизни. 
Мы используем ее для общения, работы и развлечений. 
Мой адрес электронной почты - user@example.com. 
Я также знаю другие адреса, такие как mail@domain.ru и info@company.com. 
Кроме того, мы иногда получаем письма на адрес support123@example.org. 
В общем, электронная почта играет ключевую роль в нашей современной жизни.
"""

emailsFound = findEmails(text)
print("Email addresses found:")
for email in emailsFound:
    print(email)


# #2
# import re

# def extractNum(text):
#     phone = r'\+7-\d{3}-\d{3}-\d{2}-\d{2}|\b8-\d{3}-\d{3}-\d{2}-\d{2}\b'
#     phones = re.findall(phone, text)
#     return phones

# text = """
# бла бла бля мой номер +7-111-111-11-11 а стоп нееет мой номер +7-324-452-12-23 или все таки с 8 хмммм 8-188-188-23-32
# """

# foundPhones = extractNum(text)
# for phone in foundPhones:
#     print(phone, end=' ')


# #3
# import re

# def IsDateCheck(date):
#     datePattern = r'^\d{2}-\d{2}-\d{4}$'
    
#     match = re.match(datePattern, date)
#     if match:
#         return True
#     else:
#         return False
# dates = [
#     "25-12-2022",
#     "31/12/2022",  
#     "12-25-2022",  
#     "2022-12-25"   
# ]


# for date in dates:
#     if IsDateCheck(date):
#         print(f"{date}: True")
#     else:
#         print(f"{date}: False")



# #4
# import re 

# def exportHashtags(text):
#     pattern = r'\#\w+'
#     hashtags = re.findall(pattern, text)
#     return hashtags

# text = """
# вот пример #пример хэштэга думаете это все а вот батц и еще #один
# """

# foundHash = exportHashtags(text)
# for tag in foundHash:
#     print(tag, end=' ')



# #5
# import re

# def extractUrls(text):
#     urlPattern = r'https?://(?:[-\w.]|(?:%[\da-fA-F]{2}))+'
#     urls = re.findall(urlPattern, text)
#     return urls

# text = """
# Это пример текста с несколькими URL-адресами.
# Вот простой URL: http://example.com
# А вот URL с параметрами запроса: https://www.example.com/search?q=python&lang=en
# И еще один URL: https://subdomain.example.com/path/to/resource
# """

# foundUrls = extractUrls(text)
# for url in foundUrls:
#     print(url, end=' ')



# #6
# import re

# def exportRightIpAddresses(text):
#     ipPattern = r'\b(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\b'
#     ipAddresses = re.findall(ipPattern, text)
#     return ipAddresses

# text = """
# вот айпи найди его 192.168.0.101
# """

# foundIp = exportRightIpAddresses(text)
# for ip in foundIp:
#     print(ip)


# #7
# import re

# def findDuplicate(text):
#     word_pattern = r'\b(\w+)\b'  
#     words = re.findall(word_pattern, text)  
#     uniqueWords = []  
#     duplicateWords = []  

#     for word in words:
#         if word in uniqueWords:
#             if word not in duplicateWords:  
#                 duplicateWords.append(word)  
#         else:
#             uniqueWords.append(word)  

#     return duplicateWords

# text = """
# пример текста уоуоуооуу текста
# """

# duplicates = findDuplicate(text)
# for word in duplicates:
#     print(word)


# #8
# import re

# def extractHtml(html):
#     tagPattern = r'<[^>]+>'
#     htmlTags = re.findall(tagPattern, html)
#     return htmlTags

# html = """
# <html>
# <head>
# <title>Пример страницы</title>
# </head>
# <body>
# <h1>Заголовок</h1>
# <p>Это абзац текста.</p>
# <a href="https://example.com">Ссылка</a>
# </body>
# </html>
# """

# htmlTags = extractHtml(html)
# print("Теги HTML в строке:", htmlTags)


# #9
# import re

# def extractDomainNames(text):
#     domainPattern = r'\b(?:https?://)?(?:www\.)?([a-zA-Z0-9.-]+\.[a-zA-Z]{2,})\b'
#     domainNames = re.findall(domainPattern, text)
#     return domainNames

# text = """
# Вот пример текста с несколькими доменными именами: https://example.com, www.google.com и http://test123.org.
# """

# domains = extractDomainNames(text)
# print("Доменные имена в тексте:", domains)


# #10
# import re

# def findDigitVal(text):
#     digitPattern = r'\b\d+\b'    
#     digitVal = re.findall(digitPattern, text)
#     return digitVal

# text = "В этой строке есть цифровые значения, такие как 123, 456 и 789."

# digitVal = findDigitVal(text)
# for num in digitVal:
#     print(num, end=' ')


# #11
# import re

# def IsPasswordSaverCheck(password):
#     pattern = r'^(?=.*[A-Z])(?=.*[a-z])(?=.*\d).{8,}$'
#     if re.match(pattern, password):
#         return True
#     else:
#         return False
# password = input("введи пароль ")
# if IsPasswordSaverCheck(password):
#     print("пароль подходит")
# else:
#     print("пароль не подходит")


# #12
# import re

# def exportTime(text):
#     pattern = r'\d{2}\:\d{2}'
#     times = re.findall(pattern, text)
#     valTimes = []

#     for time in times:
#         hour, minute = map(int, time.split(':'))
#         if 0 <= hour <= 23 and 0 <= minute <= 59:
#             valTimes.append(time)
#     return valTimes

# text = """
# бла бла бла 25:32 бла время 23:12 а стоп или 03:32 -34:32
# """

# val = exportTime(text)
# for time in val:
#     print(time, end=' ')


# #13
# import re

# def exportAbbs(text):
#     pattern = r'\b[A-Z]{2,}'
#     abbs = re.findall(pattern, text)
#     return abbs

# text = """
# текст который содержит аббревиатуру по типу NASA или же IKEA
# """

# abbs = exportAbbs(text)
# for abb in abbs:
#     print(abb, end=' ')


# #14
# import re

# def findFileNames(text):
#     pattern = r'\b[\w\d]+\.\w+\b'
#     fileNames = re.findall(pattern, text)
#     return fileNames

# text = "Список файлов: file1.txt, document.docx, image.jpg, data.csv"

# bbb = findFileNames(text)

# for i in bbb:
#     print(i, end=' ')


# #15
# import re

# def findColorCod(text):
#     pattern = r'[a-fA-F0-9]{6}\b'
#     codes = re.findall(pattern, text)
#     return codes

# text = """
# этот текст содержит несколько цветов: #FF0000, #00FF00, #0000FF
# """

# codes = findColorCod(text)
# for code in codes:
#     print('#',code, sep='', end=' ')


# #16
# import re

# def checkCardNum(text):
#     pattern = r'\b\d{4}-\d{4}-\d{4}-\d{4}\b'
#     card = re.findall(pattern, text)
#     return card

# text = """
# вот пример кода карты 4539-1780-7234-5678 и вот еще пример 4916-2323-1234-5678
# вот еще но он не правильный -34916-2323-1234-5678
# """

# cards = checkCardNum(text)
# for card in cards:
#     print(card)

# #17
# import re

# def extractKeywords(text):
#     keywords = ["import", "if", "else", "for", "while", "def", "class", "try", "except", "return", "and", "or", "not", "in", "is", "pass", "break", "continue"]
#     pattern = r'\b(?:' + '|'.join(keywords) + r')\b'
#     extractedkeywords = re.findall(pattern, text)
#     return extractedkeywords

# text = """
# Пример программы на Python:
# def factorial(n):
#     if n == 0:
#         return 1
#     else:
#         return n * factorial(n-1)
# print(factorial(5))
# """
# keywords = extractKeywords(text)
# for keyword in keywords:
#     print(keyword)


# #18
# import re

# def exportText(text):
#     pattern = r"\[(.*?)\]"
#     baboba = re.findall(pattern, text)
#     return baboba

# text = """
# вот пример текста в [скобках] по идее он должен [найти]
# """

# bb = exportText(text)
# for i in bb:
#     print("[",i,"]", sep='', end=' ')


# #19
# import re

# def findWithLength(text, length):
#     pattern = r'\b{length}\b'
#     bub = re.findall(pattern, text)
#     return bub
# text = """
# вот текста со словами разной длины
# """
# n = int(input())
# bb = findWithLength(text, n)
# for i in bb:
#     print(i, end=' ')

# #20
# import re

# def exportText(text):
#     pattern = r"\'(.*?)\'"
#     baboba = re.findall(pattern, text)
#     return baboba

# text = """
# вот пример текста с 'ковчками' по идее он должен 'найти'
# """

# bb = exportText(text)
# for i in bb:
#     print("'",i,"'", sep='', end=' ')