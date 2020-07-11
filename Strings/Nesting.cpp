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
            if (S[i] != '0' and i == 0)
            {
                for (int j = S[i] - '0'; j > 0; j--)
                {
                    S_final.append("(");
                }
            }
            if (i + 1 != S.length())
            {
                if (S[i] == S[i + 1])
                {
                    S_final.append(string(1, S[i]));
                }

                else if (S[i] > S[i + 1])
                {
                    S_final.append(string(1, S[i]));
                    for (int j = S[i] - S[i + 1]; j > 0; j--)
                    {

                        S_final.append(")");
                    }
                }
                else if (S[i] < S[i + 1])
                {
                    S_final.append(string(1, S[i]));
                    for (int j = S[i + 1] - S[i]; j > 0; j--)
                    {
                        S_final.append("(");
                    }
                }
            }
            if (i == S.length() - 1)
            {
                S_final.append(string(1, S[i]));
                for (int j = S[i] - '0'; j > 0; j--)
                {
                    S_final.append(")");
                }
            }
        }
        cout << "Case #" << x << ": " << S_final << endl;
        x++;
    }
}