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
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n,k,g;cin>>n>>k>>g;int sc = k*g;
    //cout<<sc<<el;
    // int ans = kg/(n-1);
    // ans = ans-g;
    // ans = ans*(n-1);
    // cout<<ans<<el;
    int z = ceil((double)g/2)-1;
    int zz = z*n;
    //cout<<zz<<el;
    if(zz>=sc) cout<<sc<<el;
    else{
        int zm = z * (n-1);
        int lk = sc-zm;
        int xx= lk%g;
        if(xx< (z+1)) zm+=xx;
        else{
            zm -= (g-xx);
        }
        cout<<zm<<el;
    }
  }
}