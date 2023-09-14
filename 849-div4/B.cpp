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
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    in(n);string s;cin>>s;int x=0,y=0;int k=0;
    for(int i=0;i<n;i++){
    	if(s[i]=='U') x++;
    	else if(s[i]=='D') x--;
    	else if(s[i]=='R') y++;
    	else if(s[i]=='L') y--;
    	if(x==1 && y==1){
    		cout<<"YES"<<el;
    		k=1;
    		break;
    	}
    }
    if(k==0)cout<<"NO"<<el;
  }
}