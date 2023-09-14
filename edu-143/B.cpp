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
    int n,k;cin>>n>>k;int c=0,d=0;
    int arr1[n],arr2[n];
    for(int i = 0;i<n;i++){
    	cin>>arr1[i];cin>>arr2[i];
    	if(arr1[i]==k ) c=1;
    	if(arr2[i]==k) d=1;
    }
    if(c==1 && d==1){
    	cout<<"YES"<<el;
    }
    else
    	cout<<"NO"<<el;
  }
}