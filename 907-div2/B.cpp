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
    int n,m;cin>>n>>m;int a[n]; map<int, int> map;vector<int> v;
    rep cin>>a[i];int d;
    for(int i = 0;i<m;i++) {cin>>d;if(map[d] == 0) v.push_back(d);map[d]++;}
    for(int i = 0;i<v.size();i++){
    	int x = pow(2,v[i]);
    	//cout<<v[i]<<el;
    	for(int j = 0;j<n;j++){
    		if(a[j]%x==0) a[j]+=pow(2,v[i]-1);
    	}
    }
    for(int i = 0;i<n;i++){
    	cout<<a[i]<<" ";
    }
    cout<<el;
  }
}