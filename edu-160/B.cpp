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
    string s,ss;cin>>s;int n = s.size(),ans=0;
    int a = 0,b=0;
    for(int i = 0;i<n;i++){
    	if(s[i]=='0') a++;
    	else b++;
    }
    for(int i = 0;i<n;i++){
    	if(s[i] == '0'){
    		if(b>0){
    		ss+= '1';
    		b--;
    		}
    		else{
    			ss+= '0';
    		}
    	}
    	if(s[i] == '1'){
    		if(a>0){
    		ss+= '0';
    		a--;
    		}
    		else{
    			ss+= '1';
    		}
    	}
    }
    int j = 0;
    for(int i = 0;i<n;i++){
    	if(s[j] == ss[i]){
    		ans++;
    	}
    	else j++;
    }
    cout<<ans<<el;

    
  }
}