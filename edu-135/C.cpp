#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a; cin >> a;
#define int               long long int
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
int32_t main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    int x = 0;
    in(n);string s1[n],s2[n];int a[n],b[n];
    rep {cin>>s1[i];if(s1[i].length()>1) a[i] = s1[i].length();else a[i] =  s1[i][0]-'0';}
    rep {cin>>s2[i];if(s2[i].length()>1) b[i] = s2[i].length(); else b[i] = s2[i][0]-'0';}
    sort(a,a+n);sort(b,b+n);
    rep cout<<a[i]<<" ";cout<<el;
    rep cout<<b[i]<<" ";cout<<el;
  }
}