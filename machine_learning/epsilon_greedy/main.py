#!/usr/bin/env python
import random
import operator
from pprint import pprint

# Dummy data for the algorithm to work with
# In a website this could correlate to a color scheme, page layout, etc...
data = {
    'green': {
            'total': 1,
            'clicks': 1,
            'percent': 1.0
    },
    'blue': {
            'total': 1,
            'clicks': 1,
            'percent': 1.0
    },
    'red': {
            'total': 1,
            'clicks': 1,
            'percent': 1.0
    },
}

# Keep track of how many times a random color is selected
times_random = 0

# The exploitation function
def greedy(data):
    global times_random
    # Ten percent of the time pick a random return
    # Some times called exploration
    if random.randrange(0.0, 100, 1) < 10:
        times_random += 1
        print(str(times_random) + ' random calls')

        key = random.choice(list(data.keys()))
    # If not exploring do exploitation
    else:
        # Get most popular option in the data
        # Note for ties (like the first time through) this will be a random
        # choice
        key = max(data.keys(), key=(lambda key: data[key]['percent']))
    return key

# Update the data values based on the users reaction
def updateDataValues(data, result, choice):
    # Increase the total times this option is shown
    data[result]['total'] += 1
    # If the user liked the option/color increase the 'clicks'
    if choice == 'y':
        print("Increase clicks")
        data[result]['clicks'] += 1
    # Update the percentage
    data[result]['percent'] = data[result]['clicks'] / data[result]['total']

# Step through the process 11 times.
for num in range(1, 12):
    result = greedy(data)
    print("Epsilon greedy returned " + result)
    print()

    print("Do you like the color " + result + " (y or n) : ", end="")
    choice = input()
    updateDataValues(data, result, choice)
    pprint(data)
