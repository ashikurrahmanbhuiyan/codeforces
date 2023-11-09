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
    int n;cin>>n;map<int,int> s;int a;
    for(int i = 0;i<n;i++){
    	cin>>a;s[a]++;
    }
    if(s.size()<=2){
    	int b[2];int j = 0;
    	for(auto i:s){
    		b[j]=i.second;
    		j++;
    	}
    	if(b[0]==n || b[1]==n)
    	   cout<<"YES"<<el;
    	else if(abs(b[0]-b[1])<=1)
    		cout<<"YES"<<el;
    	else cout<<"NO"<<el;

    }
    else cout<<"NO"<<el;
  }
}