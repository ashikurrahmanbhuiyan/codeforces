#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int t;cin>>t;
	while(t--){
		int arr[4];
		int x = 0;
		for (int i = 0; i < 4; ++i)
		{
			cin>>arr[i];
		}
		for (int i = 1; i < 4; ++i)
		{
			if (arr[i]>arr[0])
			{
				x++;
			}
		}
		cout<<x<<endl;
	}	
	}	
}
