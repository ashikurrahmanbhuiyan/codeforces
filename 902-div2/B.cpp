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
    int n,k;cin>>n>>k;int a[n],b[n]; rep cin>>a[i];rep cin>>b[i];
    vector<pair<int,int>>v;
    for(int i = 0;i<n;i++){
    	v.pb(make_pair(b[i],a[i]));
    }
    sort(v.begin(),v.end());
    int ans = 0;queue<int>q,qq;
    for(int i = 0;i<n;i++){
    	if(q.size() == 0){
    		ans += k;
    		if(v[i].first<k){
    		q.push(v[i].first);
    		qq.push(v[i].second);
    		}
    	}
    	else{
    		ans+= q.front();
    		qq.front()--;
    		if(qq.front() == 0){
    			q.pop();qq.pop();
    		}
    		if(v[i].first<k){
    		q.push(v[i].first);
    		qq.push(v[i].second);
    		}
    	}
    }
    cout<<ans<<el;
    
  }
}