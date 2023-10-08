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
    int n;cin>>n;string s;cin>>s;int arr[n]; rep arr[i]= s[i]-48;
    int d =0,l=0;
    for(int i = 0;i<n/2;i++){
    	if(arr[i] != arr[n-i-1]) d++;
    }
    for(int i = 0;i<n/2;i++){
    	if(arr[i]  == 1 && arr[n-i-1] == 1) l++;
    }
    for(int i = 0;i<d;i++){
    	cout<<0;
    }
    int k = d*2;
    if(n%2 == 1){
    	for(int i = 0;i<n-k;i++){
    	cout<<1;
    	}
    	cout<<1;
    }
    if(n%2 == 0){
    	for(int i = 0;i<((n-k)/2);i++){
    	cout<<10;
        }
        cout<<1;
    }
    for(int i = 0;i<d;i++){
    	cout<<0;
    }
    cout<<el;
  }
}