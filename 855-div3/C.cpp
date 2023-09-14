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
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    int n;cin>>n;int arr[n];rep cin>>arr[i];int sum=0;
    std::map<int, int> m;
    for(int i = 0;i<n;i++){
      if(arr[i]!=0) m[arr[i]]++;
      else if(arr[i]==0 && m.size()>0){
        map<int,int>::iterator it=m.end();it--;
        sum+=it->first;m[it->first]--;
        if(it->second == 0)
          m.erase(it);
      }
    }
    cout<<sum<<el;
    
    
  }
}