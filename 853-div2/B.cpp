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
    int n;cin>>n;string s;cin>>s; int nn = n/2; int d = -1;
    for(int i = 0;i<nn;i++){
      if(s[i] != s[n-1-i] && d == -1){
        d=i;
        for(int j = d;j<nn;j++){
          if(s[j] != s[n-1-j]){
            if(s[j] == '0') s[j]= '1';else s[j]='0';
          }
          else break;
        }
      }
    }
    int ans = 1;
    // for(int i = 0;i<n;i++){
    //   cout<<s[i];
    // }
    for(int i = 0;i<nn;i++){
      if(s[i] != s[n-1-i]) ans = 0;
    }
    if(ans == 1)cout<<"YES"<<el;
    else cout<<"NO"<<el;
  }
}