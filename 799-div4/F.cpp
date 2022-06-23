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
		int arr[n];int a1=0,a2=0,a3=0;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			arr[i] = arr[i]%3;
		}
		// for (int i = 0; i < n; ++i)
		// {
		// 	if (arr[i] == 0)
		// 	{
		// 		a1 = 1;
		// 	}
		// 	else if(arr[i] == 1){
		// 		a2 = 1;
		// 	}
		// 	else if (arr[i] == 2)
		// 	{
		// 		a3 = 1;
		// 	}
		// }
		// if (a1 == 1 && a2 == 1 && a3 == 1)
		// {
		// 	cout<<"YES"<<endl;
		// }
		// else
		// 	cout<<"NO"<<endl;
		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}	
}
