class Student:
    def __init__(self,name,m1,m2,m3):
        self.name = name
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3
    def calc(self):
        self.total=self.m1+self.m2+self.m3
    def display(self):
        print('Name: {}'.format(self.name))
        print('Total marks: {}'.format(self.total))
        
st = Student('abcd',90,80,70)
st.calc()
st.display()
