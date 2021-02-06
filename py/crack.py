from string import digits,ascii_letters
from itertools import product


for passcode in product(ascii_letters, repeat=3):
	print("".join(passcode))