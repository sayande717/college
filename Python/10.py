num = int(input('Enter a number: '))
ans = 0
while num!=0:
    rev = num % 10
    ans = ans * 10 + rev
    num = int(num / 10)
print('Number in reverse:',ans)