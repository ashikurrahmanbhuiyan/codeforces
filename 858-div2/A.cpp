#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a=1; cin >> a;
#define int               long long int
#define vi                vector<int>
#define pb				  push_back
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
    int x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;int ans=0;
    if(y2<y1) cout<<-1<<el;
    else{
    	while(1){
    		if(y1==y2) break;
    		else{
    			y1++;
    			x1++;
    			ans++;
    		}
    	}
    	if(x1<x2) cout<<-1<<el;
    	else {ans += abs(x2-x1);
    	cout<<ans<<el;}
	}
  }
}