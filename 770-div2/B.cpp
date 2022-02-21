#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		long long n,x,y;cin>>n>>x>>y;
		long long arr[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		long long result = 0,result1 = x, result2 = 0;
		for (int i = 0; i < n; ++i)
			{
				for(int j = 0; j < i; ++j){
					result1 = (result1 ^ arr[j]); 
				}
				for(int k = i; k < n; ++k){
					result2 = (result2 + arr[k]);
				}
				if((result1 + result2) == y){
					result = 1;
					break;
				}
				else
					result1 = 0;result2 = 0;
			}
			for (int i = 0; i < n; ++i)
		{
			result1 = result1 ^ arr[i];
		}
		if((result1 + result2) == y){
					result = 1;
				}
		if (result == 1)
			{
				cout<<"Alice\n";
			}
		if (result != 1)
		{
			cout<<"Bob\n";
		  }
	}
}
/*4
1 7 9
2
2 0 2
1 3
4 0 1
1 2 3 4
2 1000000000 3000000000
1000000000 1000000000
