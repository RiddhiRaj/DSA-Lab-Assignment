#write a python program to reverse a string using stack (using array and without using function)


def reverse_string(str):
    stack = []
    for i in str:
        stack.append(i)
    while len(stack) > 0:
        print(stack.pop(), end="")
    print()


reverse_string("hello")
