#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define F first
#define S second
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
const int M = 1e9 + 7;
// const ll M = 1e18+7;

ll BiMul(ll a, ll b)
{
    ll ans = 0;
    while (b)
    {
        if (b & 1)
        {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

ll BiPowMod(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b & 1)
        {
            ans = BiMul(ans, a) % M;
        }
        a = BiMul(a, a) % M;
        b >>= 1;
    }
    return ans;
}

vector<ll> prime;
void seive(ll n)
{

    vector<bool> Se(n, 1);
    Se[0] = 0;
    Se[1] = 0;

    for (ll i = 2; i <= n; i++)
    {
        if (Se[i] == 1)
        {
            for (ll j = i * i; j <= n; j += i)
            {
                if (Se[j] == 1)
                    Se[j] = 0;
            }
            prime.push_back(i);
        }
    }
}
void Segmented_Seive(ll a, ll z)
{
    ll sq = sqrt(z);
    seive(sq);

    vector<bool> Se1(z - a + 1, 1);
    for (ll p : prime)
    {
        ll sm = (a / p) * p;

        if (sm < a)
        {
            sm += p;
        }
        for (ll m = sm; m <= z; m += p)
        {
            Se1[m - a] = 0;
        }
    }
    for (ll i = a; i <= z; i++)
    {
        if (Se1[i - a] == 1)
            prime.push_back(i);
    }
}

void sub(ll x, vector<pair<ll, ll>> &v)
{
    ll n = v.size();
    for (ll i = 0; i < n; i++)
    {
        if (v[i].S - x > 0)
            v[i].S -= x;
        else
            v[i].S = 0;
    }
}
int main()
{

    faster;
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> p;

        ll x;

        for (ll i = 0; i < n; i++)
        {
            cin >> x;

            p.push_back({0, x});
        }

        for (ll i = 0; i < n; i++)
        {
            cin >> x;

            p[i].F = x;
        }

        sort(p.begin(), p.end());

        ll flag = 1;
        ll sum = 0;
        for (ll i = 0; i < n;)
        {

            if (p[i].S > 0)
            {
                // cout<<k<<" "<<sum<<endl;
                p[i].S -= k;
                sum += k;

                if (p[i].S <= 0)
                {
                    if (i != (n-1))
                        k -= p[i + 1].F;
                    continue;
                }

                k -= p[i].F;

                // cout<<sum<<endl;

                if (k <= 0)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                // cout<<1<<endl;
                i++;
                if (i != n)
                    p[i].S -= sum;
            }
        }

        // for(ll i = 0;i<n;i++)
        // {
        //     cout<<p[i].F<<" "<<p[i].S<<endl;
        // }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}