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
    int n;cin>>n;int arr[n],o=-1,t=-1,m=-1;rep cin>>arr[i];
    for(int i = 0;i<n;i++){
    	if(arr[i] == 1) o = i+1;
    	if(arr[i] == 2) t = i+1;
    	if(arr[i] == n) m = i+1;
    }
    if(m>o && m<t) cout<<m<<" "<<m<<el;
    if(m>t && m<o) cout<<m<<" "<<m<<el;
    if(m>o && m>t){
    	if(o>t) cout<<o<<" "<<m<<el;
    	else cout<<t<<" "<<m<<el;
    }
    if(m<o && m<t)
    	if(t<o) cout<<t<<" "<<m<<el;
    	else cout<<o<<" "<<m<<el;
  }
}