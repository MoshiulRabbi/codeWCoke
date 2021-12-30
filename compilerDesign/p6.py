
article = ['the', 'a', 'an']

inp = input('Enter a word: ')
count = 0

for word in inp.split():
    if word.lower() in article:
        print(f'{word} is an article')
        count += 1


print(f'Total {count} article found')