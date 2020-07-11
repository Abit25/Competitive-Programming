import math


def nCr(n, r):
    f = math.factorial
    return f(n) // f(r) // f(n-r)


def countTriplets(arr, r):
    dict = {}
    for i in (arr):
        if(i in dict.keys()):
            dict[i] += 1
        else:
            dict[i] = 1
    count = 0
    keys = dict.keys()
    if(r != 1):
        for j in keys:
            if((j*r) in keys and (j*r*r) in keys):
                val = dict[j] * dict[j*r] * dict[j*r*r]
                count += val
    else:
        for x in keys:
            y = nCr(dict[x], 3)
            print("nCr: ", y)
            count += nCr(dict[x], 3)

    return count


arr = list(map(int, "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 100 1000 100 1000 100 100 1000 1000 100 100".split()))

print(countTriplets(arr, 1))
