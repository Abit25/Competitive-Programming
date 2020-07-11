#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int x = 1;
    while (x <= n)
    {

        int size;
        cin >> size;
        int sum = 0, count_r = 0, count_c = 0;
        vector<vector<int>> arr(size, vector<int>(size));
        for (int i = 0; i < size; i++)
        {
            map<int, int> dict;
            for (int j = 0; j < size; j++)
            {
                cin >> arr[i][j];
                dict[arr[i][j]]++;
                if (i == j)
                {
                    sum += arr[i][j];
                }
            }
            for (auto itr : dict)
            {
                if (itr.second > 1)
                {
                    count_r++;
                    break;
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            map<int, int> dict;
            for (int j = 0; j < size; j++)
            {
                dict[arr[j][i]]++;
            }
            for (auto itr : dict)
            {
                if (itr.second > 1)
                {
                    count_c++;
                    break;
                }
            }
        }

        cout << "Case #" << x << ": " << sum << " " << count_r << " " << count_c << "\n";
        x++;
    }
}