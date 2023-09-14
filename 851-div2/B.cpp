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

int func(int n){
	int r = 0;
    while (n){
        r+=n%10;
        n/=10;
    }
    return r;
}

int32_t main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    in(n);int l=0,r=n,mid,ans;
    while(l<=r){
    	mid = (l + r) / 2;
        if(abs(func(mid) - func(n - mid)) <= 1){
            cout << mid << ' ' << n - mid << '\n';
            break;
        }
        else if(func(mid) < func(n - mid))
        	l = mid + 1;
        else
        	r = mid - 1;
    }
  }
}