num1 = int(input('Enter number 1: '))
num2 = int(input('Enter number 2: '))
op = input('Enter operand: ')
if op == '+':
    ans = num1+num2
elif op == '-':
    ans = num1-num2
elif op == '*':
    ans = num1*num2
elif op == '/':
    ans = num1/num2
elif op == '%':
    ans = num1%num2
else:
    ans = -1
if ans == -1:
    print('Invalid expression.')
else:
    print('Answer:',ans)