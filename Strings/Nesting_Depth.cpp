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
        string S, S_final = "";
        cin >> S;
        for (int i = 0; i < S.length(); i++)
        {
            if (i == 0 and S[i] == '1')
            {
                S_final.append("(");
            }
            if (i + 1 < S.length())
            {
                if (S[i] == '1' and S[i + 1] == '0')
                {
                    S_final.append("1)");
                    continue;
                }
                else if (S[i] == '0' and S[i + 1] == '1')
                {
                    S_final.append("0(");
                    continue;
                }
            }

            if (S[i] == '1' and i == S.length() - 1)
            {

                S_final.append("1)");
            }
            else
            {
                S_final.append(string(1, S[i]));
            }
        }
        cout << "Case #" << x << ": " << S_final << endl;
        x++;
    }
}