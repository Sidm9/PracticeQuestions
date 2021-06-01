class stack:
    counter = None
    
    def __init__(self, size) -> None:
        self.st = [None]*(size+1)
        stack.counter = -1
        self.capacity = size

    def push(self,data) -> int:

        if(not self.overflow()):
            stack.counter +=1
            print("Insert ",data)
            self.st[stack.counter]=data
            stack.peek(self)
        else:   
            print("Overflow")

    def pop(self)->None:
        if(not self.underflow()):
            stack.counter -=1
        else:
            print("UnderFlow")

    def overflow(self) -> bool:
        return True if(stack.counter==self.capacity) else False
    
    def underflow(self) -> bool:
        return True if(stack.counter==-1) else False
    
    def peek(self) -> None:
        print(self.st[stack.counter])


obj = stack(3)
obj.push(1)
obj.push(2)
obj.push(3)
obj.push(4)
obj.push(5)
obj.pop()
obj.pop()
obj.pop()
obj.push(6)