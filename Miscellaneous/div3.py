from itertools import combinations


def checkDiv(n):
    ls = [int(d) for d in str(n)]
    if(sum(ls) % 3 == 0):
        return 1
    else:
        return 0


def solution(L):
    all_nums = []
    L = sorted(L, reverse=True)
    for i in range(1, len(L)+1):
        comb = combinations(L, i)
        for num in comb:
            string_num = [str(n) for n in num]
            final = "".join(string_num)
            if(checkDiv(final)):
                all_nums.append(final)
    all_nums = [int(n) for n in all_nums]
    if(len(all_nums) > 0):
        return max(all_nums)
    else:
        return 0


print(solution([3, 1, 4, 1, 5, 9]))
