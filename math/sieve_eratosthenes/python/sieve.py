N = 30

def sieve(Num):
    zero_to_N = [1 for i in range(N)]

    # Step through each number starting at 2 upto N since which is consider the first prime.
    for i in range(2, N // 2):
        # If not already marked as false (zero) compute the composite number
        if (zero_to_N[i]):
            for j in range(2, N // i):
                # The value of i * j is composite so mark as not prime (zero)
                zero_to_N[i * j] = 0

    return zero_to_N


nums = sieve(N)

for i in range(2, N):
    if (nums[i]):
        print(i)
