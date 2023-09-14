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
    string s = "Md. Tareq Zaman, Part-3, 2011";int n = s.length();
    int word = 1, letter = 0, num=0,special=0;
    for(int i = 0;i<n;i++){
      if(s[i] == ' ') word++;
      else if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z') letter++;
      else if (s[i]>='0' && s[i]<='9') num++;
      else special++;
    }
    cout<<word<<el;
    cout<<letter<<el;
    cout<<num<<el;
    cout<<special<<el;
  }
}