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
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b){
    return (a.second < b.second);
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n,k;cin>>n>>k;int b[n],a; vector<pair<int,int>>v;
    for(int i = 0;i<n;i++){
    	cin>>a;
    	v.pb(make_pair(i,a) );
    }
    sort(v.begin(),v.end(),sortbysec);
    rep cin>>b[i];sort(b,b+n);
    for(int i = 0;i<n;i++){
    	v[i].second = b[i];
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<n;i++){
    	cout<<v[i].second<<" ";
    }
    cout<<el;
    

  }
}