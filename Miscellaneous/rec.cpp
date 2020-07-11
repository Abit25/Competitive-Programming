#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{

    vector<unsigned long long int> A;
    unsigned long long int n, size, j = 0;
    cin >> n;
    size = n;
    while (n > 0)
    {
        unsigned long long int x;
        cin >> x;
        A.push_back(x);
        n--;
    }
    unsigned long long int sum = 0;
    for (unsigned long long i = 0; i < size; i++)
    {
        sum += A[i];
    }
    // cout << A[0] << endl;
    unsigned long long int avg = floor(sum / size);
    cout << avg;

    return 0;
}