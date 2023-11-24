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
	string s;cin>>s;int n = s.length(),ans = 0, count = 0;
	if(s[0] != '^') ans++;
	if(s[n-1] != '^') ans++;
    for(int i = 0;i<n;i++){
    	if(s[i] == '_'){
    		count = 0;
    		while(s[i]!='^' && i<n){
    			count++;
    			i++;
    		}
    		ans += count - 1;
    	}
    }
    if(n==1 && s[0]=='^') ans = 1;
    cout<<ans<<el;
  }
}