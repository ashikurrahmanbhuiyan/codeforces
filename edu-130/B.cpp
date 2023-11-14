#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,m,sum = 0;cin>>n>>m;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			sum = sum + arr[i];
		}
		int r = sum - m;
		if (r<0)
		  cout<<0<<endl;
		else
			cout<<r<<endl;
	}	
}
