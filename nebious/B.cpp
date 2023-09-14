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
    int n,k,d,w;cin>>n>>k>>d>>w;int x = d+w,j=0,ans=0;
    int arr[n];rep cin>>arr[i];int s = arr[0],e = s+x;
    for(int i = 0;i<n;i++){
    	if(arr[i]>=s && arr[i]<=e) j++;
    	else{
    		ans++;
    		j=1;
    		s = arr[i];
    		e = s+x;
    	}
    	if(j==k){
    		ans++;
    		s = arr[i+1];
    		e = s+x;
    		j=0;

    	}
    }
    if(j>=1) ans++;
    cout<<ans<<el;
  }
}