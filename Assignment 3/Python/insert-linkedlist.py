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
        newNode = Node(data)
        newNode.next = self.head
        self.head = newNode

    def insertAtLast(self, data):
        newNode = Node(data)
        if self.head is None:
            self.head = newNode
            return
        last = self.head
        while last.next:
            last = last.next
        last.next = newNode

    def insertAtAny(self, data, x):
        newNode = Node(data)
        p = self.head
        i = 0
        while i < x-1 and p is not None:
            p = p.next
            i += 1
        if p is None:
            print("Index out of bound")
        else:
            newNode.next = p.next
            p.next = newNode

    def displayList(self):
        if self.head is None:
            print("List is empty")
            return
        else:
            p = self.head
            while p:
                print(p.data, " ", end='')
                p = p.next
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

