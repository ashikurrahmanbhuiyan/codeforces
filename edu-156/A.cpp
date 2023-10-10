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
    int n;cin>>n;int b=2;
    if(n<7) cout<<"NO"<<el;
    else if(n%3!=0){
    	cout<<"YES"<<el;
    	cout<<1<<" "<<2<<" "<<n-3<<el;
    }
    else{
    	n = n - 1;
    	while(1){
    		if((n-b)<=b) break;
    		if(b%3 != 0 && (n-b)%3 != 0){
    			cout<<"YES"<<el;
    			cout<<1<<" "<<b<<" "<<n-b<<el;
    			n=0;
    			break;
    		}
    		else b++;
    	}
    	if(n!=0)cout<<"NO"<<el;
    }
  }
}