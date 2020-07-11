#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> sorted_subarray;

float insert_and_sort(vector<int> a, int i, int d)
{
    if (i == d)
    {
        for (int i = 0; i < d; i++)
        {

            sorted_subarray.push_back(a[i]);
        }
        sort(sorted_subarray.begin(), sorted_subarray.end());
    }
    else
    {
        sorted_subarray.erase(sorted_subarray.begin());
        auto j = upper_bound(sorted_subarray.begin(), sorted_subarray.end(), a[i - 1]) - 1;

        auto itPos = j;
        sorted_subarray.insert(itPos, a[i - 1]);
    }
    if (d % 2 != 0)
    {
        float index = d / 2;
        return sorted_subarray[index];
    }
    else
    {
        float a = sorted_subarray[d / 2];
        float b = sorted_subarray[(d / 2) - 1];
        float med = (a + b) / 2;

        return med;
    }
}

int activityNotifications(vector<int> expenditure, int d)
{
    int count = 0;

    for (int i = d; i < expenditure.size(); i++)
    {
        float med = insert_and_sort(expenditure, i, d);

        if (2 * med <= expenditure[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> a{1, 2, 3, 4, 4};
    int count = activityNotifications(a, 4);
    cout << "Count is " << count;
    return 0;
}