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

int jump (int i,int k,vi &h,vi &dp){
	if(i==0) return 0;
	if(dp[i]!= -1) return dp[i];
	int cost = INT_MAX;
	for(int j = 1;j<=k;j++){
		if(i>=j)
		cost = min(cost,jump(i-j,k,h,dp)+abs(h[i] - h[i-j]));
	}
	return dp[i]=cost;
}

int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
	int n,k;cin>>n>>k;vector<int> arr(n),dp(n);rep cin>>arr[i];int ans = 0;
	rep dp[i] = -1;
	cout<<jump(n-1,k,arr,dp)<<el;

}