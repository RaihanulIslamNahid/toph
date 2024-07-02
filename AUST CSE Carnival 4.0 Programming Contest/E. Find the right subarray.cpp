#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    int n;
    int X;
    cin >> n >> X;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int sid = -1;
    int eid = -1;
    int max_ind = -1;
    int cur_sum = 0;

    int left = 0;
    for (int right = 0; right < n; ++right)
    {
        cur_sum += arr[right];

        while (cur_sum > X && left <= right)
        {
            cur_sum -= arr[left];
            left++;
        }

        if (cur_sum == X)
        {
            if (left > max_ind)
            {
                max_ind = left;
                sid = left + 1;
                eid = right + 1;
            }
        }
    }

    if (sid == -1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << sid << " " << eid << endl;
    }

    return 0;
}
