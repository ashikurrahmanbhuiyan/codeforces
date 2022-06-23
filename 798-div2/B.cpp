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
		int arr[n];
		int arr2[n];
		int p;
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
		}
		if(n==1){
			cout<<-1<<endl;
		}
		else{
		for (int i = 0; i < n; ++i){
			p = i+1;

			if (arr[i] == p && p == n){
				arr2[i] = arr2[i-1];
				arr2[i-1] = p;
			}
			else if (arr[i] == p){
				arr2[i] = p+1;
				arr2[i+1] = p;
				++i;
			}
			else if (arr[i] != (i+1))
				arr2[i] = p;
		}


		for (int i = 0; i < n; ++i){
			cout<<arr2[i]<<" ";
		}
		cout<<"\n";
	}
	}	
}
