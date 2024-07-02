#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; ++i)
    {
        string s, str;
        cin >> s >> str;

        int n = s.length();
        int m = str.length();

        if (n != m)
        {
            cout << "Case: #" << i << ": Not Possible\n";
            continue;
        }

        bool flag = false;

        for (int j = 0; j < n; ++j)
        {
            bool m = true;
            for (int k = 0; k < n; ++k)
            {
                if (s[(j + k) % n] != str[k])
                {
                    m = false;
                    break;
                }
            }
            if (m)
            {
                flag = true;
                break;
            }
        }
        cout << "Case: #" << i << ": ";
        if (flag)
        {
            cout << "Possible\n";
        }
        else
        {
            cout << "Not Possible\n";
        }
    }

    return 0;
}
