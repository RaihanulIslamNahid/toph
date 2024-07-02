#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    cin >> n;

    int count = 0;

    int sqrt_2n = sqrt(2 * n);

    for (int k = 1; k <= sqrt_2n; k += 2)
    {
        int numerator = n - k * (k - 1) / 2;

        if (numerator > 0 && numerator % k == 0)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
