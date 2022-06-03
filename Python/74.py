class Base:
    def __init__(self):
        self.a = 'abcd'
        self.__b='defg'

class Derived(Base):
    def __init__(self):
        Base.__init__(self)
        print('Calling private member of base class.')
        print(self.__b)
        
#Driver code
ob = Base()
print(ob.a)
#This will result in an error, since b is a private variable.
print(ob.__b)