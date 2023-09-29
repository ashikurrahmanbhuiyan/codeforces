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
    int n;cin>>n;vector<int> v;
    v.push_back(2);
    v.push_back(3);
    int i = 2;int s = 4;
    while(1){
    	int s1 = v[i-1]+v[i-2];
    	int s2 = 3*s;
    	if(s2%s1!=0){
    		v.push_back(s);
    		s++;
    		i++;
    	}
    	else s++;
    	if(v.size() == n) break;
    }
    for(int i = 0;i<n;i++){
    	cout<<v[i]<<" ";
    }
    cout<<el;
  }
}