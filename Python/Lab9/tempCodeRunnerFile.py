
class Job:
    def __init__(self, pos, salary, req):
        self.pos = pos
        self.salary = salary
        self.req = req
    
    def displayInfo(self):
        print(f'должность: {self.pos}')
        print(f'зарплата: {self.salary} тг')
        print(f'требование/я: {self.req}')

job1 = Job('администратор', 180000, 'говорить свободно на Казахском')
job1.displayInfo()