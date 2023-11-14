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
    int n;cin>>n;vector<int> v[n];int z;
    for(int i = 0;i<n;i++){
    	int x;cin>>x;
    	for(int j = 0;j<x;j++){
    		cin>>z;
    		v[i].push_back(z);
    	}
    }
    map<int, int> m;
    vi s;
    for(int i = n-1;i>=0;i--){
    	int x = v[i].size();
    	for(int j = 0;j<x;j++){
    		if(m[v[i][j]]==0){
    			m[v[i][j]]=1;
    			s.push_back(v[i][j]);
    			for(int k = j;k<x;k++)m[v[i][k]]=1;
    			break;
    		}
    	}	
    }
    int c = s.size();
    if(c!=n) cout<<-1<<el;
    else{
    for(int i = c-1;i>=0;i--){
    	cout<<s[i]<<" ";
    }
    cout<<el;
	}
  }
}
