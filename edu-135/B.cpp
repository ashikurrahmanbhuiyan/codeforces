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
    in(n);
    if(n%2==0){
    	for(int i = n-2;i>0;i--){
    		cout<<i<<" ";
    	}
    	cout<<n-1<<" ";cout<<n<<el;
    }
    else{
    	cout<<n-3<<" ";
    	cout<<n-2<<" ";
    	for(int i = n-4;i>0;i--){
    			cout<<i<<" ";
    		}
    	cout<<n-1<<" ";
    	cout<<n<<el;

    }
  }
}