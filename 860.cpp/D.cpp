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
struct Compare {
    bool operator() (int a, int b) {
        return a > b;
    }
};
int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n;cin>>n;int arr[n];rep cin>>arr[i];int min = arr[0],max = arr[0];
    priority_queue<int, vector<int>, Compare> vp,vn;
    
    for(int i = 0;i<n;i++){
    	if(arr[i]>=0) vp.push(arr[i]);
    	else vn.push(arr[i]);
    	if(arr[i]>max) max = arr[i];
    	if(arr[i]<min) min = arr[i];
    }
    int cheak = max - min,c=0,z=0;
    vi ans;
    while(1){
    	while(!vp.empty() && !vn.empty()&&abs(c)<cheak){
    		ans.push_back(vn.top());c+=vn.top();vn.pop();
    	}
    	while(!vn.empty() && !vp.empty()&&abs(c)<cheak){
    		ans.push_back(vp.top());c+=vp.top();vp.pop();
    	}
    	if(abs(c)>cheak) {z=1; break;}
    	if(vp.empty() || vn.empty()) break;
    }
    while(1){
    while(vn.empty() && !vp.empty()){
    		ans.push_back(vp.top());c+=vp.top();vp.pop();
    	}
    	while(vp.empty() && !vn.empty()){
    		ans.push_back(vn.top());c+=vn.top();vn.pop();
    	}
    }
    if(z==0)cout<<"YES"<<el;
  }
}