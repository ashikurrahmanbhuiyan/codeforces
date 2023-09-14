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
int a[100005],b[100005];
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    int n,w,h;cin>>n>>h>>w;
  for(int i=1;i<=n;i++) cin>>a[i];
  for(int i=1;i<=n;i++) cin>>b[i],b[i]-=a[i];
 
  sort(b+1,b+n+1);
 
  if(b[n]-b[1]<=2*(h-w)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
 }
 return 0;
 }