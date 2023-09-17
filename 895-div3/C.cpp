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
    int l,r;cin>>l>>r;
    if(l==r) {
    	int s = sqrt(r);
    	for(int i = 2;i<=s;i++){
    		if(r%i == 0){
    			cout<<i<<" "<<r-i<<el;
    			s = 0;
    		}
    	}
    	if(s!=0) cout<<-1<<el;
    }
    else if(r<4) cout<<-1<<el;
    else{
    	if(r%2==0)
    	    cout<<2<<" "<<r-2<<el;
        else
 			cout<<2<<" "<<r-3<<el;
    }
  }
}