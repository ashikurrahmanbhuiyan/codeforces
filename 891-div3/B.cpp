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
    string arr;cin>>arr;int n = arr.length();int a[n];
    for(int i = 0;i<n;i++){
      a[i] = arr[i]-48;
    }
    int d = -1;
    for(int i = 0;i<n;i++){
      if(a[i]>=5)  {d = i;break;}
    }
    if(d==-1) {rep cout<<a[i]; cout<<el;}
    else{
      for(int i = d;i>0;i--){
        if(a[i]>=5) {a[i] =0; a[i-1] += 1;}
      }
      for(int i = d+1;i<n;i++){
        a[i]=0;
      }
      int z;
      if(a[0]>=5)z=10;
      else z=a[0];
      for(int i = 1;i<n;i++){
         z=(z*10) +a[i];
       } cout<<el;
    }
  }
}