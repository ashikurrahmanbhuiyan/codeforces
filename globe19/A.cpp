#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;int max = 0, min = 10000000;
		int arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
			if (arr[i]>max)
			{
				max = arr[i];
			}
			if (arr[i]<min)
			{
				min = arr[i];
			}
		}
		if (arr[0] != min && arr[n-1] != max)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}	
}