def freqQuery(queries):
    dic = {}
    arr = []
    for query in queries:
        if(query[0] == 1):
            x = query[1]
            if(x not in dic.keys()):
                dic[x] = 1
            else:
                dic[x] += 1 

        elif(query[0] == 2):
            x = query[1]
            if(x not in dic.keys() or dic[x] <= 0):
                pass
            else:
                dic[x] -= 1

        else:
            x = query[1]

            for key in dic.keys():
                if(dic[key] == x):
                    arr.append(1)
                    break
            else:
                arr.append(0)

    return arr


arr = [(1, 1), (2, 2), (3, 2), (1, 1), (1, 1), (2, 1), (3, 2)]
print(freqQuery(arr))
