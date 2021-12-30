#Write a program that can recognize any string under the following regular expression. a*cc+

#Accepted string:
# acc
# aaaaacc
# aaaaaaaccccccc
# ccc
# cc

#any other string inputer than the above will be rejected.


def regi(str):
    if str.count('a')>=1 and str.count('c')>=1:
        if str.count('a')>=str.count('c'):
            return True
        else:
            return False
    else:
        return False

print(regi('acc'))
