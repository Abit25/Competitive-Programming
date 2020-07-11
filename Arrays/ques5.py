import time


def arrayManipulation(n, queries):
    arr = []
    for i in range(n):
        arr.append(0)
    for query in queries:
        i = query[0]-1
        j = query[1]-1
        k = query[2]
        for x in range(i, j+1):
            arr[x] += k

    return max(arr)


queries = [[1, 2, 100], [2, 5, 100], [3, 4, 100]]
start = time.time()
print(arrayManipulation(5, queries))
end = time.time()
time_taken = end - start
print('Time: ', time_taken)
