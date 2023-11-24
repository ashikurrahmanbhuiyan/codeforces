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
#define pb                push_back
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n;cin>>n;int a[n],b[n];
    int c = 1, l = 1, r = 1,ans = 1,k=1;
    rep cin>>a[i];rep cin>>b[i];
    int x;if(a[0]==b[0])x = 1;else x=0;
    for(int i = 1;i<n;i++){
    	if(a[i]==b[i]) x++;
    	if(b[i-1]>b[i]){
    		if(c>ans && x!= c){
    			ans = c;
    			l = k;
    			r = i;
    			k = i+1;
    		}
    		else{
    			k = i+1;
    		}
    		c = 0;x=0;
    	}
    	else if((i+1)==n){
    		c++;
    		if(c>ans && x!= c){
    		l = k;
    		r = i+1;
    		}
    	}
    	else{
    		c++;
    	}
    }
    cout<<l<<" "<<r<<el;
  }
}