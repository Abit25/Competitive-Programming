def countingValleys(n, s):
    val = 0
    nv = 0
    for i in range(len(s)):
        if(s[i] == 'U' and (val+1) == 0):
            val += 1
            nv += 1
        elif(s[i] == 'U'):
            val += 1
        else:
            val -= 1

    return nv
