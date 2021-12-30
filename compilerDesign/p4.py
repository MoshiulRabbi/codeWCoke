vowels = 'aeiou'

inp = input('Enter a word to search for vowel: ')
cvowel = 0
ccons = 0
cdigit = 0


for i in inp:
    if i in vowels:
        cvowel += 1
    elif i.isdigit():
        cdigit += 1
    elif i != ' ':
        ccons += 1

print('Number of vowels: {}'.format(cvowel))
print('Number of consonants: {}'.format(ccons))
print('Number of digits: {}'.format(cdigit))