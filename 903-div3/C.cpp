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
    int n;cin>>n;char arr[n][n];
    for(int i = 0;i<n;i++){
    	for(int j = 0;j<n;j++){
    		cin>>arr[i][j];
    	}
    }int ans = 0;
    for(int l = 0;l<n/2;l++){
    	
    for(int i = l;i<n-1-l;i++){
    	int max = 'a';
    	// cout<<arr[l][i]<<" ";
    	// cout<<arr[i][n-1-l]<<" ";
    	// cout<<arr[n-1-l][n-1-i]<<" ";
    	// cout<<arr[n-i-1][l]<<el;
    	if(arr[l][i]>max) max = arr[l][i];
    	if(arr[i][n-1-l]>max) max = arr[i][n-1-l];
    	if(arr[n-1-l][n-1-i]>max) max = arr[n-1-l][n-1-i];
    	if(arr[n-i-1][l]>max) max = arr[n-i-1][l];
    	ans += max - arr[l][i];
    	ans += max - arr[i][n-1-l];
    	ans += max - arr[n-1-l][n-1-i];
    	ans += max - arr[n-i-1][l];


    }
}
    cout<<ans<<el;

  }
}