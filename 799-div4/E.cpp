#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"
int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int arr[n];
		int sum = 0;
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
			sum = sum + arr[i];
		}
		if (sum < m){
			cout<<-1<<endl;
		}
		else if (sum == m){
			cout<<0<<endl;
		}
		else{
			while(m != sum){
				if ()
				{
					/* code */
				}
			}
		}

	}	
}
