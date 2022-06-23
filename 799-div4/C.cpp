#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		char arr[8][8];
		int n = 0;
		for (int i = 0; i < 8; ++i)
		{
			
			for (int j = 0; j < 8; ++j)
			{
				cin>>arr[i][j];
			}
			
		}
		int x;
		for (int i = 1; i < 7; ++i)
		{
			for (int j = 1; j < 7; ++j)
			{
				if (arr[i][j] == '#')
				{
					if(arr[i-1][j-1] == '#' && arr[i-1][j+1] == '#' && arr[i+1][j-1] == '#' && arr[i+1][j+1] == '#')
						cout<<i+1<<" "<<j+1<<endl;
						break; 
				}
			}
			
	}	
}
}
