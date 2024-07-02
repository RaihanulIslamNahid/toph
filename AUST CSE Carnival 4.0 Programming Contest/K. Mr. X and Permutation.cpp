#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main()
{
    int T;
    cin >> T;

    for (int case_num = 1; case_num <= T; ++case_num)
    {
        int n;
        cin >> n;

        // Calculate the smallest index which is (n + 1) / 2
        int result = ((n + 3) / 2) % MOD;

        // Output in the required format
        cout << "Case " << case_num << ": " << result << endl;
    }

    return 0;
}
