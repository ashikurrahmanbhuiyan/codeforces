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
	int n,k;cin>>n>>k;int ans = 0,arr[n]; rep cin>>arr[i];
	for(int i = 1;i<50;i++){
		int d = 2*i;
	    for(int j = 0;j<n;j++){
	    	ans += (d+arr[j]) * (d+arr[j]);
	    }
	    if(ans == k) {
	    	cout<<arr[0]<<el;
	    	break;
	    }
	}
  }
}