# encapsulation
# protected is _
# private is __

class Parent:
    parentAttr = 100

    # this variable is private
    __secretNum = 42

    def __init__(self):
        print("parent construtor")

    def parentMethod(self):
        print("parent method")

    def setAttr(self, attr):
        Parent.parentAttr = attr

    def getAttr(self):
        print("attr: ", Parent.parentAttr)

class Child(Parent):
    def __init__(self):
        print("child constructor")

    def childMethod(self):
        print("child method")

c = Child()
c.childMethod()
c.parentMethod()
c.setAttr(200)
c.getAttr()