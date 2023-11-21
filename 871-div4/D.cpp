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
    int n,k;cin>>n>>k;int ans = 0;stack <int> s;
    int a,b,loop = 0;
    s.push(n);
    while(s.size()>0){
    	n = s.top();
    	if(n%3!=0 && s.size() == 1) break;
    	else if(n%3!=0 && s.size()>1) s.pop();
    	else{
    		a = (n/3)*2;
    		b = (n/3);
    		if(a==k || b == k) {ans = 1;break;}
    		else {
    			s.pop();
    			if(a>k)s.push(a);
    			if(b>k)s.push(b);
    		}
    	}
    }
    if(n==k) ans =1;
    if(ans == 0) cout<<"NO"<<el;
    else cout<<"YES"<<el;
  }
}