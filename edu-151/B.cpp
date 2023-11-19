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
    int x,y,a,b,c,d;cin>>x>>y>>a>>b>>c>>d;
    int sum = 1;
    if(x>=a && x>=c && a>=c) sum += (x-a);
    else if(x>=a && x>=c && a<=c) sum += (x-c);
    else if(x<=a && x<=c && a<=c) sum += (a-x);
	else if(x<=a && x<=c && a>=c) sum += (c-x);

	if(y>=b && y>=d && b>=d) sum += (y-b);
    else if(y>=b && y>=d && b<=d) sum += (y-d);
    else if(y<=b && y<=d && b<=d) sum += (b-y);
	else if(y<=b && y<=d && b>=d) sum += (d-y);
	cout<<sum<<el;
  }
}