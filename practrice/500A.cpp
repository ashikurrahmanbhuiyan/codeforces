#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int n,m;cin>>n>>m;
	int arr[n];
	int sum = 0;
	for (int i = 0; i < n; ++i){
		cin>>arr[i];
	}
	int i = 0;
	while(i<m){
		i = arr[i] + i;
			sum = sum + arr[i];
		if ((sum+1) == m){
		cout<<"YES"<<endl;
		return 0;
	}
	}
		cout<<"NO"<<endl;
}
