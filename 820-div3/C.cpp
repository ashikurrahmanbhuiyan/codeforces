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
    string s;cin>>s;int c = 0,jump = 0;int n = s.length();
    vector<pair<char,int>>v;
    rep{
    	v.push_back({s[i],i});
    }
    vector<char>v2;
    vector<int>v3;
    sort(v.begin(),v.end());
    rep{
        if(v[i].second == n-1){
            for()
            for(int j = i+1; v[j].second != 0; j++){
                v2.push_back(v[j].first);
                v3.push_back(v[j].second);
            }
            v2.push_back(s[0]);
            v3.push_back(0);
            break;
        }
        else if(v[i].second == 0){
            for(int j = i; v[j].second != n-1; j++){
                v2.push_back(v[j].first);
                v3.push_back(v[j].second);
            }
            v2.push_back(s[n-1]);
            v3.push_back(n-1);
            break;
        }
    }
    for(int i = 1;i<v2.size();i++){
        c += v2[i] - v2[i-1];
    }
    cout<<c<<" ";
    cout<<v2.size()<<el;
    if(v3[0] == n-1){
        for(int i = v3.size()-1;i>=0;i--){
            cout<<v3[i]+1<<" ";
        }
    }
    else{
        for(int i = 0;i<v3.size();i++){
            cout<<v3[i]+1<<" ";
        }
    }
    cout<<el;
  }
}