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
    int n;cin>>n;int arr[n][n];int k;cin>>k;
    for(int i = 0;i<n;i++){
    	for(int j = 0;j<n;j++){
    		cin>>arr[i][j];
    	}
    }
    int ans = 0;
    int m = n/2;
    for(int i = 0;i<m;i++){
    	for(int j = 0;j<n;j++){
    		if(arr[i][j] != arr[n-1-i][n-1-j]) ans++;
    	}
    }
    if(n%2==1){
    	int z = n/2;
    	for(int i = 0;i<z;i++){
    		if(arr[m][i] != arr[m][n-1-i]) ans++;
    	}//cout<<ans<<el;
    }
    // if(ans>k) cout<<"NO"<<el;
    // else{
    // 	int zz = k-ans;
    // 	if(zz%2==0)
    // 		cout<<"YES"<<el;
    // 	else
    // 		cout<<"NO"<<el;
	// }
	if (ans > k) {
    cout << "NO" << '\n';
  }
  else if (n % 2 == 1 || (k - ans) % 2 == 0) {
    cout << "YES\n";
  } 
  else {
    cout << "NO\n";
  }
  }
}