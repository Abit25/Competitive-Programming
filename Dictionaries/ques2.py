def twoStrings(s1, s2):
    dic_s1 = {}
    dic_s2 = {}
    for i in s1:
        if(i not in dic_s1.keys()):
            dic_s1[i] = 1
        else:
            dic_s1[i] += 1

    for j in s2:
        if(j not in dic_s2.keys()):
            dic_s2[j] = 1
        else:
            dic_s2[j] += 1
    count = 0
    for k in dic_s1.keys():
        if(k in dic_s2.keys()):
            count += 1

    if(count > 0):
        print("YES")
    else:
        print("NO")
