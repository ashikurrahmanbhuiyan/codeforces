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
    int n,k;cin>>n>>k;int arr[n];rep cin>>arr[i];
    int ans = 1;int max = k;
	for(int i = 0;i<n;i++){
		int z = arr[i]/k;
		z++;z = k * z;
		if(arr[i]%k==0) max = 0;
		if((z-arr[i])<max) 
			max = z-arr[i];
    }
    int z= 0;
    if(k==4){
    	if(max>2)max=2;
    	for(int i = 0;i<n;i++){
    		if(arr[i]%2 ==0) z++;
    		if(arr[i]%k==0) max = 0;
    	}
    	if(z>1)max=0;
    	if(z>0&&max==2)max=1;
    }
    cout<<max<<el;
  }
}