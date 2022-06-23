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
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int t =n;
		for (int i = 0; i < n-1; ++i)
		{
			if (arr[i] == arr[i+1])
			{
				t = t-2;
				i++;
			}
		}
		cout<<t<<endl;
	}	
}
