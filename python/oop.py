# learning oop with py because i didn't learn it in grade 11 cs

class Employee:

    empCount = 0

    def __init__(self, name, salary):
        self.name = name
        self.salary = salary
        Employee.empCount += 1

def displayCount(self):
    print("Total employees %d" % Employee.empCount)

def displayEmployee(self):
    print("Name : ", self.name, " Salary : ", self.salary)

emp1 = Employee("Bruh", 4000)
emp2 = Employee("Sidd", 8000)

emp1.displayEmployee()