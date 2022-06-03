class Person:
    def __init__(self,name,idnumber):
        self.name = name
        self.idnumber = idnumber
        
    def display(self):
        print('My name is {}'.format(self.name))
        print('ID Number is {}'.format(self.idnumber))

#Child class
class Employee(Person):
    def __init__(self,name, idnumber, salary, post):
        self.salary=salary
        self.post = post
        Person.__init__(self,name,idnumber)
    
    def display(self):
        print('My name is: {}'.format(self.name))
        print('ID Number is: {}'.format(self.idnumber))
        print('Post: {}'.format(self.post))
        print('Salary: {}'.format(self.salary))

a = Employee('Rahul',886012,200000,'Intern')
a.display()