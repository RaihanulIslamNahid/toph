#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    if (n.find('0') == string::npos)
    {
        cout << -1 << endl;
        return 0;
    }

    int sum = 0;
    for (char c : n)
    {
        sum += (c - '0');
    }

    if (sum % 3 != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    sort(n.begin(), n.end(), greater<char>());

    cout << n << endl;
    return 0;
}
