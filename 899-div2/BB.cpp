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
    int n;cin>>n;map<int,int>map;
    vector<vector<int>>v(n);
    int ans =0,min1 = big;
    for(int i = 0;i<n;i++){
      int m,a;cin>>m;
      for(int j = 0;j<m;j++){
        cin>>a;v[i].pb(a);
        map[a]++;
      }
    }
    for(int i = 0;i<n;i++){
      ans =0;
      for(int j = 0;j<v[i].size();j++){
        if(map[v[i][j]]==1) ans++;
      }
      // if(ans==0){
      //   for(int j = 0;j<v[i].size();j++){
      //     map[v[i][j]]--;
      //   }
      // }
    }
    for(int i = 0;i<n;i++){
      ans =0;
      for(int j = 0;j<v[i].size();j++){
        if(map[v[i][j]]==1) ans++;
        //cout<<v[i][j]<<" ";
      }//cout<<ans<<el;
      min1 = min(ans,min1);
    }
     cout<<map.size()-min1<<el;
    //for(auto i:map) cout<<i.first<<" "<<i.second<<el;
  }
}