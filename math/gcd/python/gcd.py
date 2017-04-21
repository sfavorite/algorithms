def gcd(u, v):
    while u != v:
        if u > v:
            print(str(u) + " - " + str(v) + " = " + str(u - v))
            u = u - v
        else:
            print(str(v) + " - " + str(u) + " = " + str(v - u))
            v = v - u
    return u


a = int(input("Enter the first positive integer: "))

b = int(input("Enter the second positive integer: "))

print(gcd(a, b))
