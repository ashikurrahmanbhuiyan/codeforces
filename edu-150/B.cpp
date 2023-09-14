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
    int n;cin>>n;int arr[n],ans[n] = {0};rep cin>>arr[i];
    ans[0]= 1;int up = arr[0],upp = arr[0],start,down;
    for(int i = 1;i<n;i++){
    	if(arr[i]>=upp){
    		ans[i] = 1;
            upp = arr[i];
    	}
    	else if(arr[i]<up){
    		ans[i] = 1;
    		start = i+1;
    		down = arr[i];
    		break;
    	}
    }
    for(int i = start;i<n;i++){
    	if(arr[i]<=up && arr[i]>=down){
    		ans[i] = 1;
    		down = arr[i];
    	}
    }
    for(int i = 0;i<n;i++){
    	cout<<ans[i];
    }
    cout<<el;
  }
}