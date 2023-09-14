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
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    in(n);int arr[n];rep cin>>arr[i];int k=0,max=0,sum=0;
    for(int i = 0;i<n;i++){
    	if(arr[i]==-1){
    		if(arr[i+1]==-1){
    		k=2;break;
    		}
    		k=1;
    	}
    }
    for(int i = 0;i<n;i++){
    	sum+=arr[i];
    }
    if(k==2)
    sum+= 4;
	else if(k==0){
		sum-=4;
	}
    cout<<sum<<el;
  }
}