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
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    int n;cin>>n;string s;cin>>s;vector<char>v;int k=0;
    for(int i = 0;i<n;i++){
      if(s[i] == s[i+1])
        k++;
      else k=0;
      if(k<2)
        v.push_back(s[i]);
     }string cheak;map<string, int> m;int ans = v.size()-1,vn = v.size();
    for(int i = 0;i<vn-2;i++){
      if(v[i]==v[i+2]) ans--;
    }
    cout<<ans<<el;
  }
}