#!/usr/bin/env python

class Node:
    def __init__(self, data=None, next=None):
        self.data = data
        self.next = next

    def __str__(self):
        return str(self.data)


Hi = Node('Hi')
One = Node(1)
print(Hi)
print(One)
