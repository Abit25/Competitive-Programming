#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int dp[5][n + 1];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = 0;
        }
    }

    if (n == 0)
        cout << 1;
    else if (n == 1)
    {
        cout << 0;
    }
    else
    {
        dp[0][0] = 1;
        dp[1][0] = 0;
        dp[2][0] = 0;
        dp[3][0] = 0;
        dp[4][0] = 0;

        for (int i = 1; i <= n; i++)
        {

            dp[0][i] = (dp[0][i] + dp[1][i - 1]) % int(pow(10, 9) + 7);
            dp[0][i] = (dp[0][i] + dp[2][i - 1]) % int(pow(10, 9) + 7);
            dp[0][i] = (dp[0][i] + dp[3][i - 1]) % int(pow(10, 9) + 7);
            dp[0][i] = (dp[0][i] + dp[4][i - 1]) % int(pow(10, 9) + 7);
            //
            dp[1][i] = (dp[1][i] + dp[0][i - 1]) % int(pow(10, 9) + 7);
            dp[1][i] = (dp[1][i] + dp[4][i - 1]) % int(pow(10, 9) + 7);
            dp[1][i] = (dp[1][i] + dp[2][i - 1]) % int(pow(10, 9) + 7);
            dp[1][i] = (dp[1][i] + dp[3][i - 1]) % int(pow(10, 9) + 7);
            //
            dp[2][i] = (dp[2][i] + dp[0][i - 1]) % int(pow(10, 9) + 7);
            dp[2][i] = (dp[2][i] + dp[4][i - 1]) % int(pow(10, 9) + 7);
            dp[2][i] = (dp[2][i] + dp[1][i - 1]) % int(pow(10, 9) + 7);
            dp[2][i] = (dp[2][i] + dp[3][i - 1]) % int(pow(10, 9) + 7);
            //
            dp[3][i] = (dp[3][i] + dp[0][i - 1]) % int(pow(10, 9) + 7);
            dp[3][i] = (dp[3][i] + dp[4][i - 1]) % int(pow(10, 9) + 7);
            dp[3][i] = (dp[3][i] + dp[2][i - 1]) % int(pow(10, 9) + 7);
            dp[3][i] = (dp[3][i] + dp[1][i - 1]) % int(pow(10, 9) + 7);
            //
            dp[4][i] = (dp[4][i] + dp[0][i - 1]) % int(pow(10, 9) + 7);
            dp[4][i] = (dp[4][i] + dp[1][i - 1]) % int(pow(10, 9) + 7);
            dp[4][i] = (dp[4][i] + dp[2][i - 1]) % int(pow(10, 9) + 7);
            dp[4][i] = (dp[4][i] + dp[3][i - 1]) % int(pow(10, 9) + 7);
        }
        cout << dp[0][n] % int(pow(10, 9) + 7);
    }
    return 0;
}