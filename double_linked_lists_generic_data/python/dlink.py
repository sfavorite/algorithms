#!/usr/bin/env python

class Node:
    def __init__(self, data=None, next=None, prev=None):
        self.data = data
        self.next = next
        self.prev = prev

    def printList(node):
        while node:
            print(node)
            node = node.next

    def reversePrint(node):
        if node.next == None:
            print(node)
            return
        node.next.reversePrint()
        print(node)

    def __str__(self):
        return str(self.data)



node1 = Node(1)
node2 = Node(2)
node1.next = node2
node2.prev = node1


node1.printList()
node1.reversePrint()
