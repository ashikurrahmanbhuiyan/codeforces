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
    int n,m;cin>>n>>m;string s;cin>>s;int ans=0;
    map<char,int>m1,m2;
    for(int i = 0;i<n;i++){
      if(s[i]>='a' &&s[i]<='z')
        m1[s[i]]++;
      else
        m2[s[i]]++;
    }
    for(auto i : m1){
      int d = m2[toupper(i.first)];
      if(d>0 && i.second>0){
        if(d>i.second){
          ans += i.second;
          m2[toupper(i.first)] -= i.second;
          m1[i.first] -=i.second;
        }
        else{
          ans+= d;m2[toupper(i.first)] -=d;
          m1[i.first] -=d;
        }
      }
    }
    for(auto i:m2){
      if(i.second>=2){
        while(m2[i.first]>=2 && m>0){
          m2[i.first]-=2; m--;ans++;
        }
      }
      //cout<<i.second<<el;
    }
    for(auto i:m1){
      if(i.second>=2){
        while(m1[i.first]>=2 && m>0){
          m1[i.first]-=2; m--;ans++;
        }
      }
      //cout<<i.second<<el;
    }
    cout<<ans<<el;
  }
}