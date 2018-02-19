class student:
  pass

class person:
    objects=0 #static variable
    #def __init__(self):
       # self.name='no One'
        #self.age=0
    def __init__(self,name,age):
        self.name=name;
        self.age=age;
        person.objects+=1
    def display(self):
        return '{} is  {} years old '.format(self.name,self.age)
    @classmethod
    def decrease_objects(cls,value): # static function
        cls.objects-=value
    @classmethod
    def from_string(cls):    # another constructor 
        return cls('no One',0)
    

per1=person.from_string()
print(per1.display())
s=list(input("enter a name and age for a person  ").split())
per2=person(s[0],int(s[1]))
print(per2.display())
print(per2.__dict__)
print(per2.objects)
print(per2.__dict__)
print(person.__dict__)

