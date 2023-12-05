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
    int n;cin>>n;int arr[n];rep cin>>arr[i];int d = 0, f=0;
    for(int i = 1;i<n;i++){
    	if(arr[i]<arr[i-1]){
    		d = i-1;
    		f = i;
    		break;
    	}
    }
    if(d==0 && d==0) {rep cout<<1;cout<<el;}
    else{
    int x = arr[f];
    for(int i = 0;i<f;i++){
    	if(arr[i]>= arr[f]) cout<<1;
    	else cout<<0;
    }int y;
    for(int i = 0;i<f;i++){
    	if(arr[i]>= arr[f]){
    		y = arr[i];break;
    	}
    }
    for(int i = f;i<n;i++){
    	if(arr[i]<= y && arr[i] >= x){
    		cout<<1;
    		x = arr[i];
    	}else cout<<0;
    }
    cout<<el;
	}
  }
}