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
#define For(i,j,k) for(int i=(j);i<=(k);++i)
int a[200005],b[200005];
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n,m,s=0,f=0,e=0; cin>>n>>m;
    int a[n],b[m];
	for(int i = 0;i<n;i++){
		cin>>a[i];
		f^=a[i];
	}
	for(int i = 0;i<m;i++){
		cin>>b[i];
		s|=b[i];
	}
	for(int i = 0;i<n;i++){
		a[i] |= s;
		e ^= a[i] ;
	}
	cout<<min(f,e)<<" "<<max(f,e)<<endl;
  }
}