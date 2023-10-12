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
    int a[3];cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    int d = 0;
    while(a[1]>a[0] && d<4){
    	a[1] -= a[0];
    	d++;
    }
    while(a[2]>a[0] && d<4){
    	a[2] -= a[0];
    	d++;
    }
    if(a[0]== a[1] && a[0] == a[2] && d<4){
    	cout<<"YES"<<el;
    }
    else
    	cout<<"NO"<<el;
  }
}