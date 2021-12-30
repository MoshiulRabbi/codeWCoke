#count and show the max frequency of a word in a string.

inp = input('enter string: ')

def max_freq(inp):
    inp = inp.split()
    d = {}
    for i in inp:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1

    max_freq = 0
    for i in d:
        if d[i] > max_freq:
            max_freq = d[i]
            word = i
    print(f'Word: {word},\nFrequency: {max_freq}')

max_freq(inp)

