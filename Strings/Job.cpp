#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

struct job
{
    int start_time;
    int end_time;
    string who = " ";
};

vector<pair<job, int>> sortArrByTime(vector<job>, int);

bool compareByLength(const pair<job, int> &a, const pair<job, int> &b)
{
    return a.first.start_time < b.first.start_time;
}

bool compareByIndex(const pair<job, int> &a, const pair<job, int> &b)
{
    return a.second < b.second;
}

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
        vector<job> jobs(size);
        vector<pair<job, int>> jobs_index(size);
        for (int i = 0; i < size; i++)
        {
            cin >> jobs[i].start_time >> jobs[i].end_time;
        }
        jobs_index = sortArrByTime(jobs, size);
        jobs_index[0].first.who = "J";
        int j_end_time, c_end_time = 0;
        j_end_time = jobs_index[0].first.end_time;
        int flag = 0;
        // cout << jobs_index.size() << endl;
        for (int j = 1; j < size; j++)
        {
            //cout << "J END TIME : " << j_end_time << " START : " << jobs_index[j].first.start_time << " END : " << c_end_time;
            if (jobs_index[j].first.start_time >= j_end_time)
            {
                jobs_index[j].first.who = "J";
                j_end_time = jobs_index[j].first.end_time;
            }

            else if (jobs_index[j].first.start_time >= c_end_time)
            {
                jobs_index[j].first.who = "C";
                c_end_time = jobs_index[j].first.end_time;
            }
            else
            {
                cout << "Case #" << x << ": IMPOSSIBLE" << endl;
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            sort(jobs_index.begin(), jobs_index.end(), compareByIndex);
            string s = "";
            for (int k = 0; k < size; k++)
            {
                s.append(jobs_index[k].first.who);
            }
            cout << "Case #" << x << ": " << s << endl;
        }

        x++;
    }
}

vector<pair<job, int>> sortArrByTime(vector<job> arr, int n)
{

    // Vector to store element
    // with respective present index
    vector<pair<job, int>> vp;

    // Inserting element in pair vector
    // to keep track of previous indexes
    for (int i = 0; i < n; ++i)
    {
        vp.push_back(make_pair(arr[i], i));
    }

    // Sorting pair vector
    sort(vp.begin(), vp.end(), compareByLength);

    // Displaying sorted element
    // with previous indexes
    // corresponding to each element
    return vp;
}
