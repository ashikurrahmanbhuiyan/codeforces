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
#define big               20000000
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n;cin>>n;int a[n]; string s[n];
    for(int i = 0;i<n;i++) cin >> a[i]>>s[i];
    int min11 = big, min10 = big , min01 = big;
    for(int i = 0;i<n;i++) {
    	if(s[i][0] == '1' && s[i][1] == '1' && a[i]<min11) min11 = a[i];
    	if(s[i][0] == '0' && s[i][1] == '1' && a[i]<min01) min01 = a[i];
    	if(s[i][0] == '1' && s[i][1] == '0' && a[i]<min10) min10 = a[i];
    }
    if(min(min10+min01,min11) != big)cout<<min(min10+min01,min11)<<el;
    else cout<<-1<<el;
  }
}