#include <bits/stdc++.h>
using namespace std;
#define f(i,a,b) for(i=a;i<b;i++)
#define fi(i,a,b) for(i=a;i>=b;i--)
#define all(v) (v).begin(),(v).end()
#define vi(v) vector<int> v
#define vii(v) vector<ll> v
#define srt(v) sort(v, v + n)
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
using ll = long long;
const int N = 500005;
ll i, j, z;
ll a[N];
void solve()
{
    ll n; bool ch = true;
    cin >> n;
    ll rate = 0;
    f(i, 1, n + 1)
    {
        cin >> a[i];
    }
    fi(i, n, 2)
    {
        if (a[i] >= a[i - 1])
        {
            if (i - 2 > 0)
            {
                ll diff = a[i] - a[i - 1];
                a[i - 2] += diff;
            }
        }
        else
        {
            if (i - 1 == 1)
            {
                no; return;
            }
            else
                a[i - 2] -= (a[i - 1] - a[i]);
        }
        --i;
    }
    yes;
    return;
}
int main()
{
    int t1;
    t1 = 1;
    cin >> t1;
    while (t1--)
        solve();
    return 0;
}
