#include <iostream>
#include <vector>

using namespace std;

int getMaxSpeed(vector<int> max_speeds, int no_cars)
{
    int val = 1;
    for (int i = 1; i < no_cars; i++)
    {
        if (max_speeds[i - 1] >= max_speeds[i])
        {
            val++;
        }
        else
        {
            max_speeds[i] = max_speeds[i - 1];
        }
    }
    return val;
}

int main()
{
    int no_testcases;
    int no_cars;
    cin >> no_testcases;
    while (no_testcases > 0)
    {
        cin >> no_cars;
        vector<int> max_speeds(no_cars, 0);
        for (int i = 0; i < no_cars; i++)
        {
            cin >> max_speeds[i];
        }
        int val = getMaxSpeed(max_speeds, no_cars);
        cout << val << endl;
        no_testcases--;
    }

    return 0;
}