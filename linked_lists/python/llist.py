#!/usr/bin/env python

class Node(object):

    def __init__(self, data = None, next = None):
        self.data = data
        self.next = next

    def __str__(self):
        return str(self.data)

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

    def isEmpty(self):
        return self.head == None

    # Insert a node at head of list
    def push(self, data):
        new_node = Node(data)
        new_node.setNext(self.head)
        self.head = new_node

    def pop(self, data):
        pass

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

List = LinkedList()
List.printList()
List.push('A')
List.push('B')
List.printList()
