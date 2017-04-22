
n=int(input('Enter a positive integer:'))

count = 0

result = n;

while (result != 1):
    count += 1
    # Odd number
    if (result % 2):
        result = (3 * result + 1) / 2
    else:
        result = result / 2
    print("Result is: ", result)
