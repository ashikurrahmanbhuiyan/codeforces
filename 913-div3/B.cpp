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
    string s;cin>>s;int n = s.length();stack<int> sm,sc;
    for(int i = 0;i<n;i++){
        if(s[i] == 'b'){
            if(sm.size()!=0){
                s[sm.top()] = 'b';
                sm.pop();
            }
        }
        else if (s[i] == 'B'){
            if(sc.size()!=0){
                s[sc.top()] = 'B';
                sc.pop();
            }
        }
        else{
            if(s[i]>='a' && s[i]<='z') sm.push(i);
            if(s[i]>='A' && s[i]<='Z') sc.push(i);
        }

    }
    for(int i = 0;i<n;i++){
        if(s[i]!='b'&&s[i]!='B')cout<<s[i];
    }cout<<el;
  }
}