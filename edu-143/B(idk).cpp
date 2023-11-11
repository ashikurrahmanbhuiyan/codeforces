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
    int n,k;cin>>n>>k;int a,b; int ma = 0, mb=0;
    for(int i = 0;i<n;i++){
    	cin>>a>>b;
    	if(a==k && b==k) ma = 2;
    	if(a==k) ma = 1;
    	if(b==k && ma==1) ma =2;
    	if(b==k) mb = 1;
    	if(a==k && mb==1) mb =2;
    }
    if(ma==2 || mb == 2) cout<<"YES"<<el;
    else cout<<"NO"<<el;
  }
}