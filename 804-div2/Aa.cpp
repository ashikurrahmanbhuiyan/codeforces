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
int func(int n){
	int t = n;int a;
	int min = t%10,max = t%10;
	while(t>0){
		a = t%10;
		if(a<min) min = a;
		if(a>max) max = a;
		t = t/10;
	}
	return max-min;
}
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n1,n2;cin>>n1>>n2;int m =0,ans=0;
    	for(int i = n1;i<=n1+100 && i<=n2;i++){
    		int z = func(i);
    		if(z>=m) {ans = i;m=z;}
    	}
    	cout<<ans<<el;
  }
}