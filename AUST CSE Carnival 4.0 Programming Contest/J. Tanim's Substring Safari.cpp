#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> v;
    int t = 0;
    int st = 0;

    for (int end = 0; end < s.length(); ++end)
    {
        char c = s[end];
        if (v.find(c) != v.end())
        {
            st = max(st, v[c] + 1);
        }
        v[c] = end;
        t = max(t, end - st + 1);
    }

    cout << t << endl;

    return 0;
}
