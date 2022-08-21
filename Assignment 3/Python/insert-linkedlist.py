# Write a program to implement the following functions for single linked list.
# • createList
# • insertAtFirst
# • insertAtLast
# • insertAtAny
# • displayList

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def createList(self):
        n = int(input("Enter the number of nodes: "))
        if n == 0:
            return
        for i in range(n):
            data = int(input("Enter the element to be inserted: "))
            self.insertAtLast(data)

    def insertAtFirst(self, data):
        newNode = Node(data) # create a new node
        newNode.next = self.head #here we are pointing the new node to the head of the list
        self.head = newNode #here we are making the new node as the head of the list

    def insertAtLast(self, data):
        newNode = Node(data)
        if self.head is None: #if the list is empty then make the new node as the head of the list
            self.head = newNode
            return
        last = self.head #make a pointer to the head of the list
        while last.next: #loop until the last node of the list
            last = last.next #move the pointer to the next node of the list
        last.next = newNode #make the new node as the next node of the last node of the list
 
    def insertAtAny(self, data, x):
        newNode = Node(data)
        p = self.head #make a pointer to the head of the list
        i = 0
        while i < x-1 and p is not None:  #loop until the x-1 node of the list
            p = p.next #move the pointer to the next node of the list
            i += 1 #increment the counter
        if p is None: #if the counter reaches the end of the list then return that
            print("Index out of bound")
        else:
            newNode.next = p.next
            p.next = newNode

    def displayList(self):
        if self.head is None:
            print("List is empty")
            return
        else:
            p = self.head #make a pointer to the head of the list
            while p: #loop until the last node of the list
                print(p.data, " ", end='') 
                p = p.next #move the pointer to the next node of the list
            print()

list = LinkedList()

while True:
    print("1. Create List")
    print("2. Insert at beginning")
    print("3. Insert at end")
    print("4. Insert at any position")
    print("5. Display list")
    print("6. Exit")

    option = int(input("Enter your choice: "))

    if option == 1:
        list.createList()
    elif option == 2:
        data = int(input("Enter the element to be inserted: "))
        list.insertAtFirst(data)
    elif option == 3:
        data = int(input("Enter the element to be inserted: "))
        list.insertAtLast(data)
    elif option == 4:
        data = int(input("Enter the element to be inserted: "))
        x = int(input("Enter the index at which element to be inserted: "))
        list.insertAtAny(data, x)
    elif option == 5:
        list.displayList()
    elif option == 6:
        break
    else:
        print("Wrong option")
    print()

