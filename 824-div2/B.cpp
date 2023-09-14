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
	in(n);in(x);int arr[n];rep cin>>arr[i];
	sort(arr,arr+n);
    map<int,int> m;int a,p;
    for(int i = 0;i<n;i++){
    	a = arr[i];
    	if(a%x==0){
			p=a/x;
			if(m.find(p)==m.end())
				m[a]++;
			else if(m[p]>0)
				m[p]--;
			else
				m[a]++;
		}
    	else
    		m[a]++;
    }
    int c =0;
	for(auto i:m)
		c+=i.second;
	cout<<c<<el;
  }
}