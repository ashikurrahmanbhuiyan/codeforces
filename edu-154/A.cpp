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
    int n;cin>>n; vector<int> v;
    while(n>0){
    	v.push_back(n%10);
    	n/=10;
    }int ans = -1;
    int l = v.size();
    reverse(v.begin(),v.end());
    for(int i = 0;i<l-1;i++){
     	for(int j = 1;j<l;j++){
     		int d = v[i]*10+v[j];
     		int m = 0;
     		for(int i = 1;i<d;i++){
     			if(d%i==0)m++;
     			if(m>1) break;
     		}
     		if(m==1) {ans = d;break;}
     	}
     	if(ans!=-1) {break;}
     } cout<<ans<<el;
  }
}