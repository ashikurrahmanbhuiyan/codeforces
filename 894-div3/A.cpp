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
    int n,m;cin>>n>>m;char arr[n][m];
    for(int i = 0;i<n;i++){
    	for(int j = 0;j<m;j++){
    		cin>>arr[i][j];
    	}
    }
    char c = 'v';
    int ans = 0;
    for(int j = 0;j<m;j++){
    	for(int i = 0;i<n;i++){
    		if(arr[i][j] == c && ans == 0){
    			ans++;
    			c = 'i';
    			i=0;j++;
    			if(j==m) break;
    		}
    		if(arr[i][j] == c && ans == 1){
    			ans++;
    			c = 'k';
    			i=0;j++;
    			if(j==m) break;
    		}
    		if(arr[i][j] == c && ans == 2){
    			ans++;
    			c = 'a';
    			i=0;j++;
    			if(j==m) break;
    		}
    		if(arr[i][j] == c && ans == 3){
    			ans++;
    			break;
    		}
    	}
    	if(ans == 4) break;
    }
    if(ans == 4) cout<<"YES"<<el;
    else cout<<"NO"<<el;
  }
}