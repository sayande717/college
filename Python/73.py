class Bird:
    def intro(self):
        print('There are many types of birds.')
        
    def flight(self):
        print('Most birds can fly but some cannot.')
        
class sparrow(Bird):
    def flight(self):
        print('\nSparrows can fly.')
class ostrich(Bird):
    def flight(self):
        print('\nOstriches cannot fly.')
        
ob = Bird()
ob.intro()
ob.flight()

ob_spr = sparrow()
ob_spr.flight()

ob_ost = ostrich()
ob_ost.flight()