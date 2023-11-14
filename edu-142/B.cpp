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
	int a,b,c,d;cin>>a>>b>>c>>d;
    if(a==0)
        cout<<1<<el;
    else if(abs(b-c)>a)
        cout<<2*a+min(b,c)*2+1<<el;
    else
        cout<<a+b+c+min({a+b-c+1,a-b+c+1,d})<<endl;
  }
}