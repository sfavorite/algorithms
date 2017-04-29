def gcd(u, v):
    while u > 0:
        if u < v:
            temp = u;
            u = v;
            v = temp;
        print(str(u) + " % " + str(v) + " = " + str(u % v))

        # New value of u
        u = u % v;


    return v


a = int(input("Enter the first positive integer: "))

b = int(input("Enter the second positive integer: "))

print(gcd(a, b))
