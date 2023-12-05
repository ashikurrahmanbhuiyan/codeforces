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
    string s; cin>>s;int n = s.size();
    int a[n];
    for(int i = 0;i<n;i++) a[i] = s[i]-48;
    	cin>>s;int m = s.size();
    int b[m];
    for(int i = 0;i<m;i++) b[i] = s[i]-48;
    	int ans = 0;
    if(n!=m){
    	if(n>m){
    		ans+= a[0];
    		ans += (n-1) * 9;
    	}
    	else{
    		ans+= b[0];
    		ans += (m-1) * 9;
    	}
    	cout<<ans<<el;
    }
    else{
    	for(int i = 0;i<n;i++){
    		if(a[i] != b[i]){
    			ans+= abs(a[i] - b[i]);
    			ans += (n-i-1) * 9; 
    			break;
    		}
    	}
    	cout<<ans<<el;
    }
  }
}