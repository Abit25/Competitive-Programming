
def solution(x):
    new_string = []

    for i in x:
        asci = ord(i)
        if(not (asci >= 97 and asci <= 122)):
            new_string.append(i)
        else:
            diff = asci-97
            new_string.append(chr(122-diff))

    return "".join(new_string)


print(solution("wrw blf hvv ozhg mrtsg'h vkrhlwv?"))
