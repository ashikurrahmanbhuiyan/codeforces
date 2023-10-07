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
    int n,k,a,b,x,y;
    cin>>n>>k>>a>>b;
    int aa[n],bb[n];
    for(int i = 0;i<n;i++) cin>>aa[i]>>bb[i];
    // int min1 = big;
    // for(int i = 0;i<k;i++){
    // 	if(abs(aa[i]-aa[a-1])<min1) min1 = abs(aa[i]-aa[a-1]);
    // }
    // int min2 = big;
    // for(int i = 0;i<k;i++){
    // 	if(abs(aa[i]-aa[b-1])<min2) min2 = abs(aa[i]-aa[b-1]);
    // }

    // int min3 = big;
    // for(int i = 0;i<k;i++){
    // 	if(abs(bb[i]-bb[a-1])<min3) min3 = abs(bb[i]-bb[a-1]);
    // }
    // int min4 = big;
    // for(int i = 0;i<k;i++){
    // 	if(abs(bb[i]-bb[b-1])<min4) min4 = abs(bb[i]-bb[b-1]);
    // }
    	//cout<<min4<<el;
    // int min5 = abs(aa[a-1]-aa[b-1]);
    // int min6 = abs(bb[a-1]-bb[b-1]);
    // if(min1 == big || min2 == big || min3 == big || min4 == big)
    // 	cout<<min5+min6<<el;
    // else
	// cout<<min(min5,(min1+min2))+min(min6,(min3+min4))<<el;

    	int min1 = abs(aa[a-1]-aa[b-1]) + abs(bb[a-1]-bb[b-1]);
    //cout<<min1<<el;
    	int min2 = min1,min3 = min1;
    	for(int i = 0;i<k;i++){
    	if((abs(aa[a-1]-aa[i])+abs(bb[a-1]-bb[i]))<min2) min2 = (abs(aa[a-1]-aa[i])+abs(bb[a-1]-bb[i]));
    	}
    	for(int i = 0;i<k;i++){
    	if((abs(aa[b-1]-aa[i])+abs(bb[b-1]-bb[i]))<min3) min3 = (abs(aa[b-1]-aa[i])+abs(bb[b-1]-bb[i]));
    	}
    	cout<<min(min1,(min2+min3))<<el;
  }
}