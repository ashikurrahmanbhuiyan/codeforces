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
    string s;cin>>s;int n = s.length();int a = 0,count=0;
    int x = 0;
    for(int i = 0;i<n;i++){
    	if(s[i]=='0')break;
    	x++;
    }if(x<n){
    for(int i = n-1;i>=0;i--){
    	if(s[i]=='0')break;
    	x++;
    }
    }
    a = x;
    for(int i = 0;i<n;i++){
    	if(s[i] == '1'){
    		count = 0;
    		while(s[i]!='0' && i<n){
    			count++;
    			i++;
    		}
    		if(count>a) a = count;
    	}
    }
    if(count == n) cout<<n*n<<el;
    else if(a==1)cout<<1<<el;
    else if(a==0) cout<<0<<el;
    else {
    	int kk = a/2;
    	cout<<(a-kk)*(kk+1)<<el;
    }
  }
}