#!/usr/bin/env python
import gc

class Node(object):

    def __init__(self, data = None, next = None):
        self.data = data
        self.next = next

    def __str__(self):
        return str(self.data)

    def __del__(self):
        pass

    def getData(self):
        return self.data

    def setData(self, data):
        self.data = data

    def getNext(self):
        return self.next

    def setNext(self, next):
        self.next = next



class LinkedList(object):

    def __init__(self):
        self.head = None

    def __del__(self):
        self.EmptyList()

    def isEmpty(self):
        return self.head == None

    # Insert a node at head of list
    def InsertAtHead(self, data):
        new_node = Node(data)
        new_node.setNext(self.head)
        self.head = new_node

    def InsertAtTail(self, data):
        current = self.head

        new_node = Node(data)
        # If list empty set new node as head
        if (not self.head):
            self.head = new_node
        # Find the tail
        else:
            while current.getNext():
                current = current.getNext()
            current.setNext(new_node )

    def DeleteNode(self, data):
        current = self.head

        while current.next.data != data:
            current = current.getNext()
        current.next = current.next.next



    def EmptyList(self):
        print("Starting empty list")
        if (self.head):
            current = self.head
            while (current):
                self.head = current.getNext()
                del current
                current = self.head
        return 'List now empty'

    # Compute the number of nodes in the list
    def size(self):
        current = self.head
        count = 0
        while current:
            count += 1
            current = current.next
        return count

    def search(self, data):
        pass

    def printList(self):
        current = self.head
        while current:
            print(current.data)
            current = current.getNext()

print('-- Create list and add \'1\'--')
List = LinkedList()
List.InsertAtTail('1')
List.printList()
print('-- Insert \'A\' & \'B\'-----------')
List.InsertAtHead('A')
List.InsertAtHead('B')
List.printList()
print('-- Insert \'C\'-----------')
List.InsertAtTail('C')
List.printList()
print('-- Delete \'A\'-----------')
List.DeleteNode('A')
List.printList()
print('-- Empty the list -----------')
List.EmptyList()
print('Size: ', List.size())
List.printList()

# Force garbage collection
#gc.collect()
oldcounts = gc.get_count()
#del List
gc.collect()
newcounts = gc.get_count()
print(oldcounts, newcounts)
