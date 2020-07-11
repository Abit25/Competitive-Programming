#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    int n, q;
    cin >> n;
    cin >> q;
    vector<int> all_wallets(n, 0);
    while (q > 0)
    {
        int ac, a, b;
        cin >> ac;
        cin >> a;
        cin >> b;
        if (ac == 0)
        {
            for (int i = a; i <= b; i++)
            {
                all_wallets[i] = (all_wallets[i] == 0) ? 1 : 0;
            }
        }
        else
        {
            int count = 0;
            for (int i = a; i <= b; i++)
            {
                if (all_wallets[i] == 1)
                {
                    count++;
                }
            }
            cout << count << endl;
        }
        q--;
    }
}