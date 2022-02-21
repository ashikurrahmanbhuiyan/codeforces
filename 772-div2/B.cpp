#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n],count = 0,max = 0;
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
			max = MAX(max,arr[i]);
		}
		for (int i = 1; i < n-1; ++i)
		{
			if (arr[i]> arr[i-1] && arr[i]>arr[i+1])
			{
				arr[i+1] = max;
				count++;
			}
		}
		cout<<count<<endl;
		for (int i = 0; i < n; ++i)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}	
}
