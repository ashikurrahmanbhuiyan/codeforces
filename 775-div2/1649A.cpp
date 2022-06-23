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
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int count = 0,sum = 0;
		for (int i = 0; i < n; ++i)
		{
			if (arr[i] == 0)
			{
				count = 2;
				for (int j = i+1; j < n; ++j)
				{
					if (arr[j] == 1)
					{
						break;
					}
					else
						count++;
				}
			 sum = sum + count;
			 i = i + count - 1;
			}
		}
		cout<<sum<<endl;
	}	
}