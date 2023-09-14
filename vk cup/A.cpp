#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a; cin >> a;
#define int               long long int
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define lb(arr,n,t)       lower_bound(arr,arr+n,t)-arr
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
int32_t main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    int w,d,h;
    int a, b, f,g;
    cin >> w >> d >> h>> a >> b >> f >> g;
    int x = a+h+f+abs(b-g);
    int y = w-a+h+w-f+abs(b-g);
    int z = b+h+g+abs(a-f);
    int t = d-b+h+d-g+abs(a-f);
    cout << min(min(z,t),min(y,x))<< endl;
  }
}