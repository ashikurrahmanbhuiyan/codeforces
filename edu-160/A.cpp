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
    string s;cin>>s;int n = s.size(),k;int a=0,b=0;
    a=s[0]-48;
    for(int i = 1;i<n;i++){
    	if(s[i]=='0') a=(s[i]-48)+(a*10);
    	else{k=i;
    		break;}
    }cout<<" ";
    for(int i = k;i<n;i++){
    	b=(s[i]-48)+(b*10);
    }
    if(a>=b ) cout<<-1<<el;
    else
    cout<<a<<" "<<b<<el;
  }
}
