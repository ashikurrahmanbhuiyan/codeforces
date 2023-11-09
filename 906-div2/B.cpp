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
    int n,m;cin>>n>>m;string s,t;cin>>s>>t;int ans=1,d=1;
    for(int i = 0;i<n-1;i++){
    		if(s[i]==s[i+1] ){d =0;break;}
    	}
    for(int i = 0;i<m-1;i++){
    	if(t[i]==t[i+1]) {ans =0;break;}
    }
    if(t[0]!=t[m-1]) ans =0;
    if(ans == 0 && d==0) cout<<"NO"<<el;
    else{
    	ans=1;
    	for(int i = 0;i<n-1;i++){
    		if(s[i]==s[i+1] && s[i] == t[0]){ans =0;break;}
    	}
    	if(ans == 0) cout<<"NO"<<el;
    	else cout<<"YES"<<el;
    }
  }
}