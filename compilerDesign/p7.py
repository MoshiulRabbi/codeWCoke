def find_identif(s):
   if not s[0].isalpha() and s[0] != '_':
      return False

   for ch in s[1:]:
      if not ch.isalnum() and ch != '_':
         return False

   return True

inp = input('Enter a string: ')
print(find_identif(inp))