class Car():
    def __init__(self,name,brand):
        self.name = name
        self.brand = brand

    def speed(self):
        pass

    def _mileage(self):
        pass    

class Tesla(Car):
    def __init__(self,name,brand,auto):
        super().__init__(name,brand)
        self.auto = auto


    def show(self):
      print(f"Auto mode {self.auto}") 


    def addf(self,n1,n2):
        self.n1 = n1
        self.n2 = n2

        print(f"add of {self.name} {n1+n2}")




class Toyota(Car):
    def __init__(self,name,brand,color):
        super().__init__(name,brand)
        self.color = color


    def show(self):
        print(f"Name: {self.name}, color: {self.color} , Brand: {self.brand}")           



class Hyundai(Car):
    def __init__(self,name,brand,color):
        super().__init__(name,brand)
        self.color = color

    def show(self):
        print(f"Name: {self.name}, color: {self.color} , Brand: {self.brand}")    




myToyota = Toyota("Toyota","y1","Green")

myHundai = Hyundai("Hyundai","b2","Red")

mytesla = Tesla("Tesla","se","yes")
myToyota.show()

myHundai.show()
mytesla.show()

mytesla.addf(2,3)
mytesla.addf(50,12)