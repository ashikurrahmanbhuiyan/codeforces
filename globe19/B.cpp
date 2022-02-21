#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];
		long long result = 1,sum = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int test = 0;
		for (int i = 1; i < n-1; ++i)
			{
				test = test + arr[i];
			}
		if (n == 3 && arr[1] % 2 != 0)
		{
			cout<<-1<<endl;
		}
		else if (test == (n-2))
		{
			cout<<-1<<endl;
		}
		else
		{
			for (int i = 1; i < n-1; ++i)
			{
				sum = sum + arr[i];
				if (arr[i]%2 != 0)
				{
					sum++;
				}
			}
			cout<<sum/2<<endl;
		}

			

	}	
}