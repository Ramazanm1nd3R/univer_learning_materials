from docx import Document

# Путь к вашему Word файлу
word_file_path = 'D:/Files/Univer/Software architecture/Labs/Lab2/мои мысли насчет лаб 2.docx'

# Чтение текста из Word файла
def read_text_from_word(file_path):
    doc = Document(file_path)
    full_text = []
    for paragraph in doc.paragraphs:
        full_text.append(paragraph.text)
    return '\n'.join(full_text)

# Исходный текст из Word файла
word_text = read_text_from_word(word_file_path)

# Разделение текста на отдельные блоки по номерам рисков
risk_blocks = word_text.split('\n\n')

# Создание списка кортежей (уровень риска, блок текста)
risk_levels = []
for block in risk_blocks:
    if 'Важность:' in block:
        importance_index = block.index('Важность:')
        importance = int(block[importance_index + 9])
        risk_levels.append((importance, block))

# Сортировка по уровню риска от высокого к низкому
sorted_risk_levels = sorted(risk_levels, reverse=True)

# Вывод отсортированных блоков
for level, block in sorted_risk_levels:
    print(f'Уровень риска: {level}\n{block}\n{"="*50}\n')
