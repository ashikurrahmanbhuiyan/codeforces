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
    int n;cin>>n;int d= ceil((double)(n-2)/2);
    if(n<3){
    for(int i = 1;i<=n;i++){
    	cout<<i<<" ";
    }cout<<el;
	}
	else{
	    for(int i = 0;i<d;i++){
	    	cout<<i+3<<" ";
	    }
	    cout<<1<<" ";
	    for(int i = d;i<(n-2);i++){
	    	cout<<i+3<<" ";
	    }cout<<2<<el;
	}
  }
}