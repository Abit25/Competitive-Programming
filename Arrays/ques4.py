# def minimumSwaps(arr):
#     min = 0
#     i = 0
#     temp = []
#     for i in range(len(arr)):
#         temp.append(i+1)
#     i = 0
#     count = 0
#     n = 0

#     while(arr != temp):
#         count += 1

#         if(arr[i] == (i+1)):

#             i += 1
#         else:
#             min += 1
#             x = arr[arr[i]-1]
#             t = arr[i]
#             arr[arr[i]-1] = t
#             arr[i] = x
#             i += 1

#         if(i >= len(arr)):
#             i = 0

#     return min, count


def minimumSwaps(arr):
    i = 0
    min = 0
    dic = {}
    for j in range(len(arr)):
        dic[arr[j]] = j

    while(i < len(arr)):
        if(arr[i] == i+1):
            i += 1
        else:
            temp = arr[i]
            arr[i] = arr[dic[i+1]]
            arr[dic[i+1]] = temp
            dic[temp] = dic[i+1]
            dic[i+1] = i
            i += 1
            min += 1
    return(min)


arr = [7, 1, 3, 2, 4, 5, 6]

print(minimumSwaps(arr))
