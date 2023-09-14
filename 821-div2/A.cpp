#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a; cin >> a;
#define int               long long int
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
int32_t main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
#endif
in(t);while(t--){
	in(n);int arr[n];rep cin>>arr[i];int c =0;
	repi(i,0,n-1)if(arr[i]>arr[i+1]) c=1;
	if (c==0){
		cout<<0<<el;
	}
	else{
	if((arr[0]+arr[n-1])%2==0){
		arr[0] = arr[n-1];
	}
	else
		arr[n-1] = arr[0];
	cout<<n-1<<el;
	cout<<1<<" "<<n<<el;
	repi(i,1,n-1){
		if((arr[i]+arr[0])%2==1){
			cout<<1<<" "<<i+1<<"\n";	
		}
		else
			cout<<i+1<<" "<<n<<"\n";
		}
	}
  }
}