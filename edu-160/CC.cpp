#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

#define FIO                     ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll                      long long int
#define ull                     unsigned long long int
#define lll                     __int128
#define lld                     long double
#define loop(i, a, b)           for(ll i = a; i <= b; i++)
#define loop2(i, b, a)          for(ll i = b; i >= a; i--)
#define ini(x, y)               memset(x, y, sizeof(x))
#define all(x)                  x.begin(), x.end()
#define all2(x)                 x.rbegin(), x.rend()
#define sz(x)                   (ll)x.size()
#define pb                      push_back
#define ppb                     pop_back
#define mp                      make_pair
#define ff                      first
#define ss                      second
#define M                       1000000007
#define endl                    '\n'
#define bits(x)                 __builtin_popcountll(x)
#define zrbits(x)               __builtin_ctzll(x)
#define vl                      vector<ll>
#define pll                     pair<ll,ll>
#define vpll                    vector<pll>
#define uni(x)                  x.erase(unique(all(x)), x.end())
#define ordered_set             tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define multi_ordered_set       tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>
#define mxheap                  priority_queue<ll>
#define mnheap                  priority_queue<ll, vector<ll>, greater<ll>>
#define mxheap2                 priority_queue<pair<ll,ll>>
#define mnheap2                 priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>>


using namespace std;

void gabbarIsBack() {
        ll q;
        cin >> q;
        vector<ll> f(31);
        ll fix = (1LL << 30);
        while(q--) {
                ll id;
                cin >> id;
                ll x;
                cin >> x;
                if(id == 1) {
                        f[x]++;
                } else {
                        for(ll i = 30; i >= 0; i--) {
                                ll cur = (1LL << i);
                                ll mn = min(f[i], x / cur);
                                x -= mn * cur;
                        }
                        if(x == 0) {
                                cout<<"YES"<<endl;
                        } else {
                               cout<<"NO"<<endl;
                        }
                }
        }
}

signed main () {
        #ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
        FIO;
        int tc = 1;
        // cin >> tc;
        for(int i = 1; i <= tc; i++) {
                gabbarIsBack();
        }
        return 0;
}