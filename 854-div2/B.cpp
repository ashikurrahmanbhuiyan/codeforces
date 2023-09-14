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
    int n;cin>>n;double arr[n];int l=0;rep {cin>> arr[i];if(arr[i]==1)l=1;}int j=0,d=0,z=20;
    vector<pair<int,int>>v;
    while(z--){
    for(int i=0;i<n-1;i++){
      if(arr[i]!=arr[i+1] && arr[i]!=1 && arr[i+1]!=1){
        if(arr[i]<arr[i+1]){
          while(ceil(arr[i+1]/arr[i])>=2){
            arr[i+1] = ceil(arr[i+1]/arr[i]);
            v.push_back(make_pair(i+1,i));
          }
        }
        else{
          while(ceil(arr[i]/arr[i+1])>=2){
            arr[i] = ceil(arr[i]/arr[i+1]);
            v.push_back(make_pair(i,i+1));
          }
        }
      }
    }
    }
    // for(int i = 0;i<n;i++){
    //   cout<<arr[i]<<" ";
    // }
    // cout<<el;
    if(n==1) cout<<0<<el;
    else{
      for(int i = 0;i<n-1;i++){
        if(arr[i]!=arr[i+1])
          d=1;
      }
      if(d==1) cout<<-1<<el;
      else{
        cout<<v.size()<<el;
        for(auto i : v) cout<<i.first+1<<" "<<i.second+1<<el;
      }
    }
  }
}