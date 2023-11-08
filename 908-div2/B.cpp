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
    int n;cin>>n;int arr[n];rep cin>>arr[i];
    int ans[n]; rep ans[i]=1;
    int d = 0, result = 0, cheak;
    for(int i = 0;i<n-1;i++){
    	for(int j = i+1;j<n;j++){
    		if(arr[i] == arr[j] && d==0){
    			ans[j] = 2;
    			d++;
    			cheak = arr[i];
    		} 
    		if(arr[i] == arr[j] && arr[i] != cheak && d==1){
    			ans[j] = 3;
    			d++;
    		} 
    	}
    }
    for(int i = 0;i<n;i++){
    	if(ans[i] ==2 || ans[i]==3) result++;
    }
    //cout<<result<<el;
    if(result != 2) cout<<-1<<el;
    else{
    for(int i = 0;i<n;i++){
    	cout<<ans[i]<<" ";
    }
    cout<<el;
    }
    
  }
}