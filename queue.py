class queue:
    front = 0
    back = -1

    def __init__(self, size) -> None:
        self.que = [None]*(size+1)
        self.capacity = size

    def enqueue(self,data) -> int:

        if(not self.overflow()):
            queue.back +=1
            self.que[queue.back]=data
            print("Insert ",data)
        else:   
            print("Overflow")

    def dequeue(self)->None:
        if(not self.underflow()):           
            print("Popped") 
            queue.front +=1
        else:
            print("UnderFlow")

    def overflow(self) -> bool:
        return True if(queue.back==self.capacity) else False
    
    def underflow(self) -> bool:
        return True if(queue.back==-1) else False
    
    def display(self)->None:
        for i in range (0,self.capacity):
            print(self.que[i])


obj = queue(3)
obj.enqueue(1)
obj.enqueue(2)
obj.enqueue(3)
obj.enqueue(4)
obj.dequeue()
obj.enqueue(5)
obj.dequeue()
obj.display()