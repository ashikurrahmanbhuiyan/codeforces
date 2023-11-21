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
    int x,y;cin>>x>>y;int a;
    if(x<y) a = x;else a = y;
    while(a>0){
    	if(x%a == 0 && y%a==0) break;
    	a--;
    }
    int ans1 = (x/a)+(y/a)+a-1;
    int ans2 = 0;
    // if(x<=y){
    // 	int z = x/2;
    // 	if(x==1) {ans2 = 1;z=1;}
    // 	else if(x==2) {ans2 += 1;z=2;}
    // 	else if(x%2==0)  ans2 = z-1+2;
    // 	else ans2 = z-1+3;
    	
    // 	int m = y/2;
    // 	//cout<<m<<" ";
    // 	if(y==1) ans2 += 1;
    // 	else if(y%2==0)  ans2 += m-z+2;
    // 	else ans2 += m-z+3;

    // }
    // else{
    // 	int z = y/2;
    // 	if(y==1) {ans2 = 1;z=1;}
    // 	else if(y==2) {ans2 += 1;z=2;}
    // 	else if(y%2==0)  ans2 = z-1+2;
    // 	else ans2 = z-1+3;

    // 	int m = x/2;
    // 	//cout<<m<<" ";
    // 	if(x==1) ans2 += 1;
    // 	else if(x%2==0)  ans2 += m-z+2;
    // 	else ans2 += m-z+3;
    // }
    int g = 1,k =1;
    if(x<=y){
    	while(g<x) g*=2; g/=2;
    	ans2 += g-1+2;
    	if(g<1) g=1;
    	while(k<y) k*=2; k/=2;
    	ans2 += k-g+2;
    }else{
    	while(g<y) g*=2;g/=2; 
    	ans2 += g-1+2;cout<<g<<" ";
    	if(g<1) g=1;
    	while(k<x) k*=2; k/=2;
    	ans2 += k-g+2;cout<<k<<" ";
    }
    cout<<ans2<<el;
  }
}