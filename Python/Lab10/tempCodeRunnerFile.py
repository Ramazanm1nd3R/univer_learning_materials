
#5
class Engine:
    def start(self):
        return "Engine started"

    def stop(self):
        return "Engine stopped"

class Car:
    def __init__(self):
        self.engine = Engine()  
    def start(self):
        return self.engine.start()

    def stop(self):
        return self.engine.stop()
engine = Engine()
car = Car()

print(car.start())     
print(car.stop())      
