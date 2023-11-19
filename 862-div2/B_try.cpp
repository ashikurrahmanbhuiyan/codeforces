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
    int n;cin>>n;int arr[n]; rep cin>>arr[i];vector<int> v1,v2;
    for(int i = 0;i<30;i++){
    	for(int i = 0;i<n-1;i++){
    		for(int j = 1;j<n;j++){
    			if(arr[i]>arr[j]) {
    			arr[i]=ceil((double)arr[i]/arr[j]);
    			v1.pb(i);v2.pb(j);
    		}
    		if(arr[i]<arr[j]){ 
    			arr[j]=ceil((double)arr[j]/arr[i]);
    			v1.pb(j);v2.pb(i);
    		}
    		}
    	}
    }
    int z =0;
    for(int i = 0;i<n;i++){
    	if(arr[i] == arr[0]) z++;
    }
    if(z!=n) cout<<-1<<el;
    else{
    	int mm = v1.size();
    	cout<<mm<<el;
    	for(int i = 0;i<mm;i++){
    		cout<<v1[i]+1<<" "<<v2[i]+1<<el;
    	}
    	// for(int i = 0;i<n;i++){
    	// 	cout<<arr[i]<<" ";
    	// }cout<<el;
    }
  }
}