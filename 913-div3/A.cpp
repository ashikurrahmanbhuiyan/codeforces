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
    string s;cin>>s;
    for(int i = 1;i<s[1]-48;i++){
        cout<<s[0]<<i<<el;
    }
    for(int i = s[1]-47;i<9;i++){
        cout<<s[0]<<i<<el;
    }

    for(char i = 'a';i<s[0];i++){
        cout<<i<<s[1]<<el;
    }
    for(char i = s[0]+1;i<'i';i++){
        cout<<i<<s[1]<<el;
    }
  }
}