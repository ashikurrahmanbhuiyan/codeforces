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
    int n,k;cin>>n>>k;int arr[n];rep {cin>>arr[i];arr[i] = arr[i]%k;}
    vector<pair<int,int>> vp;
    for(int i = 0;i<n;i++){
    	vp.push_back(make_pair(arr[i],i));
    }
    sort(vp.begin(),vp.end());
    for(int i = 0;i<n;i++){
    	if(vp[i].first == 0)
    	cout<<vp[i].second+1<<" ";
    }
    sort(vp.begin(),vp.end(),greater());
    for(int i = 0;i<n;i++){
    	if(vp[i].first != 0)
    	cout<<vp[i].second+1<<" ";
    }
    cout<<el;
  }
}