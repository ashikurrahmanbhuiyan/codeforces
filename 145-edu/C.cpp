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
    int n;cin>>n;int arr[n];int a,b;cin>>a>>b;int sum=0,count=0;
    for(int i = 0;i<n;i++){
      cin>>arr[i];
    }
    int nn = pow(2,n);
    if(0>=a && 0<=b) count++;
    if(arr[0]>=a && arr[0]<=b) count++;
    if(n>1){if(arr[1]>=a && arr[1]<=b) count++;}
    for(int i = 3;i<nn;i++){
      for(int j = 0;j<n;j++){
        if(i&(1<<j))
          sum+=arr[j];
        //cout<<j<<" ";

      }
      //cout<<sum<<el;
      if(sum>=a && sum<=b)count++;
      sum =0;//cout<<el;
    }
    cout<<count<<el;
}