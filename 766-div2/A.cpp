#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,m,r,c;cin>>n>>m>>r>>c;
		char arr[n][m];
		int result = -1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin>>arr[i][j];
				if (arr[i][j] == 'B')
			{
				result = 2;
			}
			}
			
		}
		if (arr[r-1][c-1] == 'B')
		{
			result = 0;
		}
		else
		{
		for (int i = 0; i < m; ++i)
		{
			if (arr[r-1][i] == 'B')
			{
				result = 1;
				break;
			}
		}
		for (int i = 0; i <n ; ++i)
		{
			if (arr[i][c-1] == 'B')
			{
				result = 1;
			}
			if (result == 1)
			{
				break;
			}
		}
	}
			cout<<result<<endl;
		


	}
}