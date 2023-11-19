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
    int n,k,x;cin>>n>>k>>x;
    if(k== 1 && x == 1) cout<<"NO"<<el;
    else if(k== 2 && x==1){
    	if(n%2==0){
    		cout<<"YES"<<el;
    		cout<<n/2<<el;
    		for(int i = 0;i<n/2;i++){
    			cout<<2<<" ";
    		}
    		cout<<el;
    	}
    	else cout<<"NO"<<el;
    }
    else if(k>2 && x==1){
    	if(n%2==0){
    		cout<<"YES"<<el;
    		cout<<n/2<<el;
    		for(int i = 0;i<n/2;i++){
    			cout<<2<<" ";
    		}
    		cout<<el;
    	}
    	else{
    		cout<<"YES"<<el;
    		cout<<n/2<<el;
    		for(int i = 0;i<(n/2)-1;i++){
    			cout<<2<<" ";
    		}
    		cout<<3<<el;
    	}
    }
    else{
    	cout<<"YES"<<el;
    	cout<<n<<el;
    	for(int i = 0;i<n;i++){
    		cout<<1<<" ";
    	}
    	cout<<el;
    }
  }
}