# Write a program to implement the following functions for single linked list.
# • createList
# • deleteFromFirst
# • deleteFromLast
# • deleteFromAny
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

    def insertAtLast(self, data):
        newNode = Node(data)
        if self.head is None:
            self.head = newNode
            return
        last = self.head
        while last.next:
            last = last.next
        last.next = newNode
    
    def deleteFromFirst(self):
        if self.head is None:
            print("List is empty")
            return
        else:
            self.head = self.head.next
    
    def deleteFromLast(self):
        if self.head is None:
            print("List is empty")
            return
        else:
            p = self.head
            while p.next.next:
                p = p.next
            p.next = None

    def deleteFromAny(self, x):
        if self.head is None:
            print("List is empty")
            return
        else:
            p = self.head
            i = 0
            while i < x-1 and p is not None:
                p = p.next
                i += 1
            if p is None:
                print("Index out of bound")
            else:
                p.next = p.next.next
                
    def displayList(self):
        if self.head is None:
            print("List is empty")
            return
        else:
            p = self.head
            while p:
                print(p.data, " ", end='')
                p = p.next

list = LinkedList()

while True:
    print("\n1. Create a list")
    print("2. Delete from first")
    print("3. Delete from last")
    print("4. Delete from any")
    print("5. Display list")
    print("6. Exit")
    choice = int(input("Enter your choice: "))
    if choice == 1:
        list.createList()
    elif choice == 2:
        list.deleteFromFirst()
    elif choice == 3:
        list.deleteFromLast()
    elif choice == 4:
        x = int(input("Enter the index: "))
        list.deleteFromAny(x)
    elif choice == 5:
        list.displayList()
    elif choice == 6:
        break
    else:
        print("Invalid choice")
        break
