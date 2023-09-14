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
    in(n);vector<int>v;int a=1,b=0;
    n--;
    for(int i = 2;n>0;i++){
    	if(n-i>0)
    	v.push_back(i);
    	else
    	v.push_back(n);
    	n-=i;
    }
    int k=v.size();
    int i=0;
    while(i<k){
    	if(i<k){b+=v[i];i++;}
    	if(i<k){b+=v[i];i++;}
    	if(i<k){a+=v[i];i++;}
    	if(i<k){a+=v[i];i++;}
    }
    cout<<a<<" "<<b<<el;
    }
}