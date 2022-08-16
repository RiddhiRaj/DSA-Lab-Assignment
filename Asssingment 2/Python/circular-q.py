# write a python program to implement a circular queue

class CircularQueue:
    
    #Constructor
    def __init__(self):
        self.queue = list()
        self.front = 0
        self.rear = 0
        self.maxSize = 8

    #Adding elements to the queue
    def enqueue(self,data):
        if self.size() == self.maxSize-1:
            return ("Queue Full!")
        self.queue.append(data)
        self.rear = (self.rear + 1) % self.maxSize
        return True

    #Removing elements from the queue
    def dequeue(self):
        if self.size()==0:
            return ("Queue Empty!") 
        data = self.queue[self.front]
        self.front = (self.front + 1) % self.maxSize
        return data

    #Calculating the size of the queue
    def size(self):
        if self.rear>=self.front:
            return (self.rear-self.front)
        return (self.maxSize - (self.front-self.rear))

q = CircularQueue()
print(q.enqueue(1))
print(q.enqueue(2))
print(q.enqueue(3)) 
print(q.enqueue(4))
print(q.enqueue(5))
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())
print(q.dequeue())