#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int N, K;
    cin >> N >> K;

    vector<string> s(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> s[i];
    }

    unordered_map<int, int> lc;
    int temp = 0;

    for (int i = 0; i < N; ++i)
    {
        int cl = s[i].length();

        if (lc.find(cl) != lc.end())
        {
            temp += lc[cl];
        }

        lc[cl]++;

        if (i >= K)
        {
            int cnt = s[i - K].length();
            lc[cnt]--;
            if (lc[cnt] == 0)
            {
                lc.erase(cnt);
            }
        }
    }

    cout << temp << endl;
    return 0;
}
