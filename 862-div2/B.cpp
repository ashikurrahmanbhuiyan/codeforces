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
    int n;cin>>n;int arr[n],one = 0;rep {cin>>arr[i];if(arr[i]==1)one++;}
    if(one>0 && one != n) cout<<-1<<el;
    else{
    	int z=0;
    	for(int i = 0;i<n;i++) if(arr[i] == arr[0]) z++;
    	if(z==n) cout<<0<<el;
    	else{
    		int x,y;vector<int> v,v1;
    		for(int i = 1;i<n;i++){
    			if(arr[i]<arr[i-1]){x=i-1;y=i;break;}
    			if(arr[i]>arr[i-1]){x=i;y=i-1;break;}
    		}
    		while(arr[x]>2) {
    			arr[x] = ceil((double)arr[x]/arr[y]);
    			v.pb(y);
    		}
    		for(int i = 0;i<n;i++){
    			if(arr[i]>2){
    				while(arr[i]>2) {
    					arr[i]=ceil((double)arr[i]/2);
    					v1.pb(i);}
    			}
    		}
    		cout<<(v.size()+v1.size())<<el;
    		for(int i = 0;i<v.size();i++){
    			cout<<x+1<<" "<<v[i]+1<<el;
    		}
    		for(int i = 0;i<v1.size();i++){
    			cout<<v1[i]+1<<" "<<x+1<<el;
    		}
    		for(int i = 0;i<n;i++){
    			cout<<arr[i]<<" ";
    		}
    		cout<<el;

    	}
    }
  }
}