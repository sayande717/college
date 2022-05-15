emp={
    'emp1':10000,
    'emp2':12000,
    'emp3':14000,
    'emp4':16000,
    'emp5':20000
}

avg=sum(emp.values())/len(emp)
print('Average salary:',avg)

for key,value in emp.items():
    if value>avg:
        print(key)