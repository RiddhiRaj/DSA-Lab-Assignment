# Write a program to implement all the insert and delete functions and display function along with an appropriate menu for a single linked list.

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

    def deleteFirst(self):
        if self.head is None:
            return
        self.head = self.head.next

    def deleteLast(self):
        if self.head is None:
            return
        if self.head.next is None:
            self.head = None
            return
        p = self.head
        while p.next.next:
            p = p.next
        p.next = None

    def deleteAny(self, x):
        if self.head is None:
            return
        if x == 1:
            self.head = self.head
            return
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
            print()

if __name__ == '__main__':
    myList = LinkedList()
    myList.createList()
    while True:
        print("1. Display List")
        print("2. Insert at beginning")
        print("3. Insert at end")
        print("4. Insert at any position")
        print("5. Delete first node")
        print("6. Delete last node")
        print("7. Delete any node")
        print("8. Quit")
        option = int(input("Enter your choice: "))
        if option == 1:
            myList.displayList()
        elif option == 2:
            data = int(input("Enter the element to be inserted: "))
            myList.insertAtFirst(data)
        elif option == 3:
            data = int(input("Enter the element to be inserted: "))
            myList.insertAtLast(data)
        elif option == 4:
            data = int(input("Enter the element to be inserted: "))
            x = int(input("Enter the position at which the element is to be inserted: "))
            myList.insertAtAny(data, x)
        elif option == 5:
            myList.deleteFirst()
        elif option == 6:
            myList.deleteLast()
        elif option == 7:
            x = int(input("Enter the position of the node to be deleted: "))
            myList.deleteAny(x)
        elif option == 8:
            break
        else:
            print("Wrong option")
        print()
