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
    int n,q;cin>>n>>q;int arr[n];string s;cin>>s;
    for(int i = 0;i<n;i++){
    	arr[i]=s[i]-48;
    }int t=n;
    for(int i = n-1;i>=0;i--){
    	if(arr[i]<q){t=i;}
    }
    for(int i = 0;i<t;i++){
    	cout<<arr[i];
    }
    cout<<q;
    for(int i = t;i<n;i++){
    	cout<<arr[i];
    }
    cout<<el;
  }
}
