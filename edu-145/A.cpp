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
    sort(arr,arr+n,greater());
    int ans =0,z=0;
    for(int i = 0;i<n;i++){
      if(ans == arr[i]){z=-1; break;}
      ans+=arr[i];
    }
    if(z==-1) cout<<"NO"<<el;
    else{
      cout<<"YES"<<el;
      rep cout<<arr[i]<<" ";cout<<el;
    }
  }
}