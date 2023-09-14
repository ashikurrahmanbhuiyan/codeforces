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
    in(n);set<int>s;int p=1;
    for(int i = 1;p<=n;i++){
    	s.insert(p);
    	p=p*i;
    }
    p=1;
    for(int i = 0;p<=n;i++){
    	s.insert(p);
    	p = p*2;
    }
    vector<int>v;
    for(auto i:s)
    	v.push_back(i);
    int nn = v.size();
    while(nn--){
		int sum=v[nn-1];
		for(int i =nn-2;i>=0;i--){
			if((sum+v[i])<n){
				sum 
			}
		}
	}
  }
}