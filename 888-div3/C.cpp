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
    int temp = k,z=0,zz=0,zzz=0;
    for(int i = 0;i<n;i++){
    	if(arr[i]==arr[0]) temp --;
    	if(temp == 0) {zzz = 1; z = i;break;} 
    }
    if(temp == 0 && arr[0] == arr[n-1]) zz=1;
    temp = k;
    for(int i = n-1;i>z;i--){
    	if(arr[i]==arr[n-1]) temp --;
    	if(temp == 0) {zz = 1;break;} 
    }
    if(zzz == 0 || zz == 0) cout<<"NO"<<el;
    else cout<<"YES"<<el;
  }
}