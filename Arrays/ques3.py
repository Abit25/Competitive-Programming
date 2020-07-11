# def minimumBribes(q):
#     no_of_bribes = 0
#     fail = 0
#     for i in range(len(q)):
#         if((q[i]-(i+1)) <= 2 and q[i] > (i+1)):
#             no_of_bribes += (q[i]-(i+1))
#         elif(q[i] <= (i+1)):
#             pass
#         else:
#             fail += 1

#     if(no_of_bribes > 0 and fail == 0):
#         print(no_of_bribes)
#     else:
#         print("Too chaotic")


def minimumBribes(q):
    fail = 0
    for i in range(len(q)):
        if(q[i] > (i+1) and (q[i]-(i+1)) > 2):
            fail += 1
    if(fail >= 1):
        print("Too chaotic")
        return
    else:
        temp = []
        for i in range(len(q)):
            temp.append(i+1)
        i = len(q)-1
        no_of_bribes = 0
        while(temp != q):
            if(q[i] > (i+1) and (q[i]-(i+1)) <= 2):
                # print(str(q) + " i="+str(i+1) +
                #       " No of bribes: " + str(no_of_bribes))
                index = q[i]-(i+1)
                no_of_bribes += index
                if(index == 2):
                    x = q[i]
                    q[i] = q[i+1]
                    q[i+1] = q[i+2]
                    q[i+2] = x
                if(index == 1):
                    x = q[i]
                    q[i] = q[i+1]
                    q[i+1] = x

                if(q[i] > (i+1) and (q[i]-(i+1)) <= 2):
                    i = i
                else:
                    i -= 1

            else:
                i -= 1
            if(i < 0):
                i = len(q)-1

        print(no_of_bribes)


arr = [1, 2, 5, 3, 7, 8, 6, 4]
minimumBribes(arr)
