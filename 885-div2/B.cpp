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
	int n,m,a;cin>>n>>m;
    vector<vector<int>> v(m),vv(m);int max1 = 0;
    for(int i = 0;i<n;i++){
    	cin>>a;v[a-1].pb(i);
    }
    for(int i = 0;i<m;i++){
    	if(v[i].size()==0) v[i].pb(big);
    }
    for(int i = 0; i < v.size(); i++) {
    	 max1 = 0;
    	vv[i].pb(v[i][0]);
        for (int j = 1; j < v[i].size(); j++) { 
            vv[i].pb(((v[i][j]-v[i][j-1])-1));
        }
        int l = v[i].size()-1;
        vv[i].pb(((n-v[i][l])-1));
        
        for (int j = 0; j < vv[i].size(); j++) {
        	max1 = max(max1,vv[i][j]);
        }

        for (int j = 0; j < vv[i].size(); j++) {
        	if(vv[i][j] == max1 && max1 != big) {vv[i][j]/=2;break;}
        } 
    }
    int max2 = 0,min2 = big;
    for(int i = 0;i<vv.size();i++){
    	max2=0;
    	for (int j = 0; j < vv[i].size(); j++) { 
    		max2 = max(max2,vv[i][j]);
        }
        min2 = min(min2,max2);
    }cout<<min2<<el;
  }
}