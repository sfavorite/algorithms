

def factorial(num):

    fact = 1
    if (num <= 65):
        for i in range(2, num+1):
            print(fact)
            fact = i * fact
    else:
        print("Can only handle integers less than 66.")
        
    return fact

number = int(input('Enter a positive integer less than 66: '))
print(factorial(number))
