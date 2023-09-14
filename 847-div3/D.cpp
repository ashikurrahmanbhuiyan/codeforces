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
    in(n);
    vector<int> v(n);
    map<int, int> m;
    set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        m[v[i]]++;
        s.insert(v[i]);
        s.insert(v[i] + 1);
    }
    int last = 0,ans= 0;
    for (auto x: s) {
        int c = m[x];
        if(c-last>0)
          ans+=c-last;
        last = c;
    }
    cout << ans << '\n';
  }
}