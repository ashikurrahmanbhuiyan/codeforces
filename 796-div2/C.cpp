#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n],sum = 0,c = 0,l=0;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		for (int i = 0; i < n; ++i)
		{
			sum = sum +arr[i];
			if (arr[i]%2==0)
				c++;
		}
		if (c<n)
		{
			cout<<c<<endl;
		}
		else{
			while(sum%2==0){
				l++;
				sum = sum/2;
			}
			cout<<l+(n-1)<<endl;
		}
	}	
}
