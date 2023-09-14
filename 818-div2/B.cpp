#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a; cin >> a;
#define int               long long int
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
int32_t main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
    in(n);in(k);in(r);in(c);
    r--;c--;
    while(r>k) r-=k;
    while(c>k) c-=k;
    while(r>0) {if((c-1)==0) c=k;else c--; r--;}
    for (int i = 0; i < n; ++i){
    	int cc = c;
    	for(int j = 0;j<n;j++){
    		if(j == (cc-1)){
    			cout<<'X'<<" ";
    			cc = cc+k;
    		}
    		else
    			cout<<'.'<<" ";
    	}
    	if(c-1==0) c=k;else c--;
    	cout<<el;
    }
    cout<<el;
  }
}