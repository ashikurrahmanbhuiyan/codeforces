#include <bits/stdc++.h>
#define MAX(x,y)(x>y?x:y)
using namespace std;
#define el "\n"

int main()
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];int sum = 0;
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
			sum = sum + arr[i];
		}
		float cheak = float(sum) / n;
		int nf = 0;
		for (int i = 0; i < n; ++i)
		{
		    if (cheak == arr[i]){
				cout<<"YES"<<endl;
				break;
		    }
		    nf++;
		}
		if (nf == n)
		{
			cout<<"NO"<<endl;
		}

	}	
}
