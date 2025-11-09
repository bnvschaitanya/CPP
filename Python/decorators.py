from functools import reduce
from random import *
import pickle
import json

def decorator(func):
    def wrapper(name):
        if name == "Ramu":
            print("Very Good Morning Ramu")
        else:
            func(name)
    return wrapper

@decorator
def wish(name):
    print(f"Good Morning {name}")

def lambda_fun():
    l1 = [1,2,3,4,5,6]
    print(f"Filter: {list(filter(lambda x: x%2 == 0, l1))}",end="\n")
    print(f"Map: {list(map(lambda x: x**2, l1))}", end="\n")
    print(f"Reduce: {reduce(lambda x,y:x+y, l1)}")
def pickling():
    l1 = [1,2,3]
    with open("file.pkl", "wb") as f:
        pickle.dump(l1,f)
    with open("file.pkl", "rb") as f:
        l2 = pickle.load(f)
    print(l2)

def json_file():
    l1 = [1,2,3]
    with open("file1.txt", "w") as f:
        json.dump(l1,f)
    with open("file1.txt","r") as f:
        data = json.load(f)
    print(list(data))
    
class student:
    def __init__(self, name):
        self.name = name
    
    def _set_age(self, age):
        self._age = age
        
    def __set_birth_place(self, bplace):
        self.__birth_place = bplace
    
    def set_bp(self, bp):
        self.__set_birth_place(bp)
    
    def get_details(self):
        print(self.name)
        print(self._age)
        print(self.__birth_place)

class Ravi(student):
    def __init__(self, name, age):
        super().__init__(name)
        self.name = name
        self.age = age
    def add(self, *vargs):
        print(sum(vargs))
    def get_details(self):
        print(self.name)
        print(self.age)
         
if __name__ == "__main__":
    # wish("Ramu")
    #print(dir(functools))
    # list = ["Apple","Bat","Cat", "Dog"]
    # for i in range(10):
    #     print(choice(list))
    try:
        # lambda_fun()
        # pickling()
        # json_file()
        s = student("Ravi")
        s._set_age(21)
        s.set_bp("Hyderabad")
        s.get_details()
        
        s = Ravi("Ramu", 22)
        s.add(1,2,3,4,5,6)
        s.get_details()
    except Exception as e:
        raise Exception(f"Caught Error in the code is {e}")
    finally:
        print("Execution came to end")