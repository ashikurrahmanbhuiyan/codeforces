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
    string s;int x;cin>>s;cin>>x;
    int h = ((s[0]-48)*10) + (s[1]-48);
    int m = ((s[3]-48)*10) + (s[4]-48);
    int hh = h,mm=m;
    int d=0;
    vector<pair<int,int>> v;
    for(int i = 0;i<1440;i++){
        v.push_back(make_pair(h,m));
        m++;
        if(m==60){
            h++;
            m=0;
        }
        if(h == 24) h=0;
    }
    int ans = 0;
    for(int i = 0;;){
        //cout<<v[i].first<<" "<<v[i].second<<el;
        int um = (v[i].first%10)*10+(v[i].first/10);
        if(um == v[i].second) ans++;
        i = i+x;
        if(i>=1440) i=i-1440;
        if(hh == v[i].first && mm == v[i].second) break;
    }
    cout<<ans<<el;
  }
}