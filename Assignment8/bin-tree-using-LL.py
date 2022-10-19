# 1. Write a program to implement Binary Tree using linked list along with the following functions:
# a) To create a binary tree.
# b) To display tree using inorder.
# c) To display tree using preorder.
# d) To display tree using postorder.
# e) To count number of node present in the tree.
# f) To find the height of the tree.
# g) To find the number of leaf node.
# h) To find the number of internal node.
# i) To search a data present in the tree.

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

class BinaryTree:
    def __init__(self):
        self.root = None

    def createTree(self):
        self.root = Node(1)
        self.root.left = Node(2)
        self.root.right = Node(3)
        self.root.left.left = Node(4)
        self.root.left.right = Node(5)
        self.root.right.left = Node(6)
        self.root.right.right = Node(7)

    def inorder(self, root):
        if root is None:
            return
        self.inorder(root.left)
        print(root.data, end=" ")
        self.inorder(root.right)

    def preorder(self, root):
        if root is None:
            return
        print(root.data, end=" ")
        self.preorder(root.left)
        self.preorder(root.right)

    def postorder(self, root):
        if root is None:
            return
        self.postorder(root.left)
        self.postorder(root.right)
        print(root.data, end=" ")

    def countNodes(self, root):
        if root is None:
            return 0
        return 1 + self.countNodes(root.left) + self.countNodes(root.right)

    def height(self, root):
        if root is None:
            return 0
        return 1 + max(self.height(root.left), self.height(root.right))

    def countLeafNodes(self, root):
        if root is None:
            return 0
        if root.left is None and root.right is None:
            return 1
        return self.countLeafNodes(root.left) + self.countLeafNodes(root.right)

    def countInternalNodes(self, root):
        if root is None:
            return 0
        if root.left is None and root.right is None:
            return 0
        return 1 + self.countInternalNodes(root.left) + self.countInternalNodes(root.right)

    def search(self, root, data):
        if root is None:
            return False
        if root.data == data:
            return True
        return self.search(root.left, data) or self.search(root.right, data)

if __name__ == "__main__":
    tree = BinaryTree()
    tree.createTree()
    print("Inorder: ", end="")
    tree.inorder(tree.root)
    print()
    print("Preorder: ", end="")
    tree.preorder(tree.root)
    print()
    print("Postorder: ", end="")
    tree.postorder(tree.root)
    print()
    print("Number of nodes: ", tree.countNodes(tree.root))
    print("Height of tree: ", tree.height(tree.root))
    print("Number of leaf nodes: ", tree.countLeafNodes(tree.root))
    print("Number of internal nodes: ", tree.countInternalNodes(tree.root))
    print("Search 5: ", tree.search(tree.root, 5))
    print("Search 10: ", tree.search(tree.root, 10))

# Output:
# Inorder: 4 2 5 1 6 3 7
# Preorder: 1 2 4 5 3 6 7
# Postorder: 4 5 2 6 7 3 1
# Number of nodes:  7
# Height of tree:  3
# Number of leaf nodes:  4
# Number of internal nodes:  3
# Search 5:  True
# Search 10:  False
 