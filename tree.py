class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key

def insert(root, key):
    if root is None:
        return Node(key)
    else:
        if root.val < key:
            root.right = insert(root.right, key)
        else:
            root.left = insert(root.left, key)
    return root

def minValueNode(node):
    current = node
    while current.left is not None:
        current = current.left
    return current

def deleteNode(root, key):
    if root is None:
        return root
    if key < root.val:
        root.left = deleteNode(root.left, key)
    elif key > root.val:
        root.right = deleteNode(root.right, key)
    else:
        if root.left is None:
            temp = root.right
            root = None
            return temp
        elif root.right is None:
            temp = root.left
            root = None
            return temp
        temp = minValueNode(root.right)
        root.val = temp.val
        root.right = deleteNode(root.right, temp.val)
    return root

def inorder(root):
    if root:
        inorder(root.left)
        print(root.val, end=" ")
        inorder(root.right)

# Create the BST
keys = [200, 150, 350, 100, 70, 110, 250, 500, 400, 550, 450]
root = None
for key in keys:
    root = insert(root, key)

print("BST after insertion:")
inorder(root)

# Delete nodes in sequence order
nodes_to_delete = [150, 500, 450, 200, 110]
for key in nodes_to_delete:
    root = deleteNode(root, key)

print("\nBST after deletion:")
inorder(root)
