class Dog:
    #Class attribute
    attr1 = 'mammal'
    
    #Instance attribute
    def __init__(self,name):
        self.name = name

#Driver code
Rodger = Dog('Rodger')
Tommy = Dog('Tommy')

#Accessing class attributes
print('Rodger is a {}'.format(Rodger.__class__.attr1))
print('Tommy is a {}'.format(Rodger.__class__.attr1))

#Accessing instance attributes
print('My name is {}'.format(Rodger.name))
print('My name is {}'.format(Tommy.name))