#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n, m, day, runs;
    map<int, int> hashmap;
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> day;
        cin >> runs;
        if (hashmap.find(day) != hashmap.end() and hashmap[day] < runs)
        {
            hashmap[day] = runs;
        }
        else
        {
            hashmap.insert({day, runs});
        }
    }
    vector<int> scores;
    for (auto i = hashmap.begin(); i != hashmap.end(); i++)
    {
        scores.push_back(i->second);
        // cout << i->first << "->" << i->second << endl;
    }
    auto maxit = max_element(scores.begin(), scores.end());
    int max1 = *maxit;
    int max2 = 0;
    for (int i = 0; i < scores.size(); i++)
    {
        if (scores[i] != max1)
        {
            if (scores[i] > max2)
            {
                max2 = scores[i];
            }
        }
    }
    cout << max1 + max2 << endl;

    return 0;
}