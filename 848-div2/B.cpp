#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a=1; cin >> a;
#define int               long long int
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define lb(arr,n,t)       lower_bound(arr,arr+n,t)-arr
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
#define big               9223372036854775807
int32_t main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    int n,m,d;cin>>n>>m>>d;int arr1[n],arr2[m];
    for(int i = 0;i<n;i++) cin>>arr1[i];
    for(int i = 0;i<n;i++) cin>>arr2[i];
  }
}

    vector<ll>p(n), a(m);
    map<ll, ll>mp, mm;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        mp[p[i]] = i;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    ll res = INT_MAX;
    for (int i = 0; i < m - 1; i++)
    {
        if (mp[a[i]] < mp[a[i + 1]] && mp[a[i + 1]] <= mp[a[i]] + d)
        {
            ll ans1 = mp[a[i + 1]] - mp[a[i]];
            if (n > (d + 1)) {
                res = min(res, max(d + 1 - ans1, 0LL));
            }
            res = min(res, ans1);
 
        }
        else {
            res = 0;
            break;
        }
    }
    if (res == INT_MAX)
        res = 0;
    cout << res << endl;