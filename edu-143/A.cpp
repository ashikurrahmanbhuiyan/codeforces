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
    int n,m;cin>>n>>m;string s1,s2;cin>>s1>>s2;int d=0;
    for(int i = 0;i<n-1;i++){
    	if(s1[i]==s1[i+1])
    		d++;
    }
    for(int i = 0;i<m-1;i++){
    	if(s2[i]==s2[i+1])
    		d++;
    }
    if(d==0){
    	cout<<"YES"<<el;
    }
    else if(d==1 && s1[n-1]!= s2[m-1]){
    	cout<<"YES"<<el;
    }
    else
    	cout<<"NO"<<el;
  }
}