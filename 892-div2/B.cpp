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
    int n;cin>>n;vector<int>v1,v2;
    int sum = 0, min3 = big,min4 = big;
    for(int i = 0;i<n;i++){
    	int m;cin>>m;int arr[m];
    	for(int i = 0;i<m;i++){
    		cin>>arr[i];
    	}
    	sort(arr,arr+m);
    	int min1 = arr[0], min2 =  arr[1];
    	if(min1<=min3) min3 = min1;
    	if(min2<=min4) min4 = min2;
    	sum+= min2;
    	//cout<<min1<<" "<<min2<<el;
    }
    cout<<sum-min4+min3<<el;
    //cout<<el;
  }
}