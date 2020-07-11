# Given 2D array of dimension 6x6


def hourglassSum(arr):
    max = -100
    for i in range(4):
        for j in range(4):
            a = arr[i][j]
            b = arr[i][j+1]
            c = arr[i][j+2]
            d = arr[i+1][j+1]
            e = arr[i+2][j]
            f = arr[i+2][j+1]
            g = arr[i+2][j+2]
            s = a+b+c+d+e+f+g
            print("Value :" + str(s))
            if(s > max):
                max = s
    return max


arr = [
    [-9, -9, -9, 1, 1, 1], [0, -9, 0, 4, 3, 2],
    [-9, -9, -9,  1, 2, 3], [0, 0, 8, 6, 6, 0],
    [0,  0, 0, -2, 0, 0], [0, 0, 1, 2, 4, 0]
]

print(hourglassSum(arr))
