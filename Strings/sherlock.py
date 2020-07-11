def isValid(s):
    s1 = list(map(str, s))
    dict = {}
    for i in s1:
        if(i in dict.keys()):
            dict[i] += 1
        else:
            dict[i] = 1

    my_list = list(dict.values())
    freq = {}
    for items in my_list:
        freq[items] = my_list.count(items)

    # if(len(freq) > 2):
    #     return "NO"
    # else:
    #     if(len(freq) <= 1):
    #         return "YES"
    #     else:
    #         one = list(freq.keys())[0]
    #         two = list(freq.keys())[1]
    #         if(abs(one-two) == 1):
    #             key1 = list(freq.values())[0]
    #             key2 = list(freq.values())[1]
    #             if(key1 == 1 or key2 == 1):
    #                 return "YES"
    #             else:
    #                 return "NO"
    #         else:
    #             return "NO"
    if(len(freq) > 2):
        return "NO"
    elif(len(freq) == 1):
        return "YES"
    else:
        mymax = max(my_list)
        mymin = min(my_list)
        if(my_list.count(mymin) >= len(my_list)-1 and mymax-mymin == 1):
            return "YES"
        elif(my_list.count(mymin) == 1 and mymax-mymin == 1):
            return "YES"
        else:
            return "NO"


print(isValid("abbac"))
