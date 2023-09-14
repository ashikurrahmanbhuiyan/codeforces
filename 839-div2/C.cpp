#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a=1; cin >> a;
#define int               long long int
#define vi                vector<int>
#define pb				  push_back
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
    int n;cin>>n;
    string s;cin>>s;int ans=0;
    std::map<char, int> m;
    int arr[n];
    for(int i = 0;i<26;i++){
    	m[char('a'+i)]=2;
    }
    arr[0]=0;
    m[s[0]]=0;
    for(int i = 1;i<n;i++){
    	if(arr[i-1] == 0 ){
    		if(m[s[i]] == 0){
    			ans = 1;
    			break;
    		}
    		arr[i]=1;
    		m[s[i]]=1;
    	}
    	else if(arr[i-1] == 1){
    		if(m[s[i]] == 1){
    			ans = 1;
    			break;
    		}
    		arr[i]=0;
    		m[s[i]]=0;
    	}
    }
	if(ans == 1) cout<<"NO"<<el;
	else cout<<"YES"<<el;
  }
}