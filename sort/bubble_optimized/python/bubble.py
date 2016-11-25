#!/usr/bin/env python
from random import shuffle

# To read about bubble sort and the optimization
# https://en.wikipedia.org/wiki/Bubble_sort#Optimizing_bubble_sort
def bubbleSort(the_list):
    end = len(the_list)
    while (end > 0):
        new_end = 0
        for i in range(1, end):
            if the_list[i - 1] > the_list[i]:
                the_list[i - 1], the_list[i] = the_list[i], the_list[i - 1]
                new_end = i
                print('new end: ', i)
                print(the_list)
        end = new_end

    return(the_list)

def unsorted_numbers(howmany):
    numbers = list(range(howmany))
    shuffle(numbers)
    return numbers

print(bubbleSort(['A', 'C', 'B', 'E', 'D', 'G', 'Y', 'Z', 'K']))
print(bubbleSort(unsorted_numbers(10)))
