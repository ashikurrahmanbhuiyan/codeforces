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
int ans=1;
in(n);while(n--){
    int t,x,y;cin>>t>>x>>y;
    int z = x+y;
    if(t<z)ans=0;
    else if(t>z){
    	if(z%2==1 &&t%2==0)ans=0;
    	if(t%2==1 &&z%2==0)ans=0;
    }
  }
  if(ans==0)cout<<"No"<<el;
  else cout<<"Yes"<<el;
}