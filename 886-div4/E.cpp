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
	int n,k;cin>>n>>k;int c = 0,sum = 0,arr[n]; rep cin>>arr[i];
	for(int j = 0;j<n;j++){
			c += pow(arr[j],2);
			sum += arr[j];
		}
		c = k - c;
		int b = 4*sum;
		int a = 4*n;
		c = c/a;
		b = b/a;
		a = a/a;
		int l = (b*b);
		int m = 4*a*c;
		int z = sqrt(l+m)-b;
		cout<<z/2<<el;
	// for(int i = 1;;i++){
	// 	int d = 4*i*sum;
	// 	int l = 4 * n * i * i;
	// 	if((d+l) == ans) {
	// 		cout<<i<<el;
	// 		break;
	// 	}
	// }
  }
}