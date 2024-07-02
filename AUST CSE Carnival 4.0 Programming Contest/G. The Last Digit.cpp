#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int ans = 1;

    for (int i = 0; i < N; ++i)
    {
        int A, B;
        cin >> A >> B;

        int ld = 1;
        A = A % 10;

        for (int j = 0; j < B; ++j)
        {
            ld = (ld * A) % 10;
        }

        ans = (ans * ld) % 10;
    }

    cout << ans << endl;

    return 0;
}
