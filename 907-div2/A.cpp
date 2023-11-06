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
    int n;cin>>n;int arr[n];rep cin>>arr[i];
    int m = 2;
    int start = 2;
    int ans = 1;
    int end = pow(2,m);
    while(end<n){
       end = pow(2,m);
       for(int i = start;(i<end-1)&&(i<n-1);i++){
       	   //cout<<i<<el;
    	   if(arr[i]>arr[i+1]) {ans = 0;break;}
       }
       if(ans == 0) break;
       start = end;
       m++;

    }
    for(int i = start;i<n-1;i++){
    	if(arr[i]>arr[i+1]) ans = 0;
    }
    if(ans == 1) cout<<"YES"<<el;
    else cout<<"NO"<<el;

  }
}