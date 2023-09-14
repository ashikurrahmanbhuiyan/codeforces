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
    int a,b;cin>>a>>b;char arr[a][b];
    for(int i = 0;i<a;i++){
      for(int j = 0;j<b;j++){
        cin>>arr[i][j];
      }
    }
    char c= 'v' ;int d=1;
    for(int i = 0;i<b;i++){
      for(int j = 0;j<a;j++){
        if(arr[j][i] == 'v' && d == 1){
          d++;i++;j=0;
          c = 'i';
          if(i==b) break;

        }
        if(arr[j][i] == 'i' && d == 2){
          d++;i++;j=0;
          c = 'k';
          if(i==b) break;
        }
        if(arr[j][i] == 'k' && d == 3){
          d++;i++;j=0;
          c = 'a';
          if(i==b) break;
        }
        if(arr[j][i] == 'a' && d == 4){
          d++;i++;j=0;
          if(i==b) break;
          break;
        }
      }
      if(d == 5) break;
    }
    if(d == 5) cout<<"YES"<<el;
    else cout<<"NO"<<el;

  }
}