#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fi(a, n) for (int i = a; i < n; i++)
void sortcolor(vector<int> &v)
{
    int ct_z = 0;
    int ct_o = 0;
    int ct_t = 0;
    fi(o, nums.size())
    {
        if (nums[i] == 0)
        {
            ct_z += 1;
            continue;
        }
        if (nums[i] == 1)
        {
            ct_o += 1;
            continue;
        }
        if (nums[i] == 2)
        {
            ct_t += 1;

            continue;
        }
    }
    cout << ct_z << " " << ct_o << " " << ct_t;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n;
    cin >> n;

    fi(0, n)
    {
        cin >> v[i];
    }
    sortcolor(v);
    return 0;
}
