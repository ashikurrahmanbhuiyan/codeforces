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
    int n,k,q,a,x=0,ans=1,ans1=0;cin>>n>>k>>q;vector<int>v;
    for(int i = 0;i<n;i++){
    	cin>>a;
    	if(a<=q) x++;
    	else{
    		if(x>0)v.pb(x);
    		x=0;
    	}
    	if(i==(n-1) && x>0)v.pb(x);
    }
    	int z = v.size();
    	for(int i = 0;i<z;i++){
    		if(v[i]>=k){
	    		x = v[i]-k+1;
	    		ans = 0;
	    		while(x>0){
		    		ans+=x;x--;
		    	}
		    	ans1+=ans;
	    	}
	    	//cout<<v[i]<<el;
    	}
	    cout<<ans1<<el;
  }
}