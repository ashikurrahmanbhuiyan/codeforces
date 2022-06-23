#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	//int t;cin>>t;
	//while(t--){
		int n,q;cin>>n>>q;
		int arr[n];
		int dsum = 0;
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
			dsum = dsum + arr[i];
		}
		sort(arr,arr+n, greater<int>());
		for (int i = 0; i < q; ++i)
		{
			int sum = 0;int tsum = dsum;
			int x,y;cin>>x>>y;
			if (x == y)
			{
				for (int i = 0; i < x; ++i)
				{
				sum = sum+arr[i];
				}
				cout<<sum<<endl;
				}
			else{
				int y1 = x-y;
				if(y1<y && x ==n){
					for (int i = 0; i < y1; ++i)
					tsum = tsum-arr[i];
				cout<<tsum<<endl;
				}
				else{
				for (int i = y1; i < x; ++i)
					sum = sum+arr[i];
				cout<<sum<<endl;
				}
				

			
		}
		}
		}
	//}	
