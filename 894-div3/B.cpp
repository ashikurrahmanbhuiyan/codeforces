#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a=1; cin >> a;
#define int               long long int
#define vi                vector<int>
#define pb                push_back
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
    int n;cin>>n;int arr[n]; rep cin>>arr[i];
    vector<int> v;
    v.pb(arr[0]);
    for(int i = 1;i<n;i++){
    	if(arr[i]<arr[i-1]){
            v.pb(arr[i]);
            v.pb(arr[i]);
        }
        else
            v.pb(arr[i]);

    }
    int x =v.size();
    cout<<x<<el;
    for(int i = 0;i<x;i++){
        cout<<v[i]<<" ";
    }
    cout<<el;

  }
}