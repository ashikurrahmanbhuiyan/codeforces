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
#define pb                push_back
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n,x1,y1,x2,y2;cin>>n>>x1>>y1>>x2>>y2;
    int p = n/2;
    if(x1>p) x1 = n-x1+1;
    if(y1>p) y1 = n-y1+1;
    if(x2>p) x2 = n-x2+1;
    if(y2>p) y2 = n-y2+1;
    int x = min(x1,y1);
    int y = min(x2,y2);
    cout<<abs(x-y)<<el;
  }
}