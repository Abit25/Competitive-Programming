import math


def nCr(n, r):
    f = math.factorial
    return f(n) // f(r) // f(n-r)


def sherlockAndAnagrams(s):
    dic = {}
    count = 0
    for i in range(0, len(s)):
        for j in range(i, len(s)):
            subs = "".join(sorted(s[i:j+1]))
            print(subs)
            if(subs not in dic.keys()):
                dic[subs] = 1
            else:
                dic[subs] += 1

    for key in dic.keys():
        if(dic[key] > 1):
            count += nCr(dic[key], 2)
    print(count)


sherlockAndAnagrams("kkkk")
