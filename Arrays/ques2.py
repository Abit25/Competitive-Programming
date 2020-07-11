

def rotLeft(a, d):
    temp = []
    for i in range(len(a)):
        temp.append(0)
    for i in range(len(a)):
        index = (i-d) % len(a)
        temp[index] = a[i]

    return temp


arr = [1, 2, 3, 4, 5]
print(rotLeft(arr, 4))
