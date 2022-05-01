str1 = input('Enter a string: ')
i = int(len(str1)-1)
if str1[::-1] == str1:
    print(str1,'is a palindrome string.')
else:
    print(str1,'is not a palindrome string.')