#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		long arr[n];
		long long max = 0,sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			sum = sum + arr[i];
			max = MAX(max,arr[i]);
		}
		sum = sum - max;
		if (sum == 0)
		{
			cout<<0<<endl;
		}
		else if (max > sum)
		{
			cout<<max -sum<<endl;
		}
		else
			cout<<1<<endl;
	}	
}