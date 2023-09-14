#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a; cin >> a;
#define int               long long int
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define lb(arr,n,t)       lower_bound(arr,arr+n,t)-arr
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
int32_t main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    in(n);in(x);string s;cin>>s;
    map<char, int> m;
    char d ='a';
    for(int i = 0;i<=26;i++){
    	m[d+i]=0;
    }
    for(int i = 0;i<n;i++){
    	m[s[i]]++;
    }
    for(int i = 0;i<n;i++){
    	m[s[i]]++;
    }
    char c = 'a';vector<char>v;vector<int>vv;
    while(x>0){
    	if(m[c]<x){
    		for(int i = m[c];i<=x;i++){
    			v.push_back(c);
    			x--;
    		}
    	}
    	c = c+1;
    }
    for(auto x:v)
    	cout<<x<<" ";
    cout<<el;
  }
}