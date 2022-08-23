# Write a program to print the odd number and even number nodes separately from a single linked list.

from traceback import print_tb


class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert_node(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        temp = self.head
        while temp.next:
            temp = temp.next
        temp.next = new_node

    
    def print_list(self):
        temp = self.head
        while temp:
            print(temp.data, end=" ")
            temp = temp.next
        print()



    def odd_even_list(self):
        # separate lists for odd and even nodes
        odd = LinkedList()
        even = LinkedList()
        temp = self.head
        while temp:
            if temp.data % 2 == 0:
                even.insert_node(temp.data)
            else:
                odd.insert_node(temp.data)
            temp = temp.next
        # print odd and even lists
        print("Odd List: ", end="")
        odd.print_list()
        print("Even List: ", end="")
        even.print_list()



if __name__ == '__main__':
    llist = LinkedList()
    print("Enter the number of nodes: ")
    n = int(input())
    for i in range(n):
        print("Enter the data: ", end="")
        data = int(input())
        llist.insert_node(data)
    llist.odd_even_list()
    print("\n")
    
    # llist.insert_node(1)
    # llist.insert_node(2)
    # llist.insert_node(3)
    # llist.insert_node(4)
    # llist.insert_node(5)
    # llist.insert_node(6)
    # llist.insert_node(7)
    # llist.insert_node(8)
    # llist.insert_node(9)
    # llist.insert_node(10)
    # llist.print_list()
    # llist.head = llist.odd_even_list()
    # llist.print_list()