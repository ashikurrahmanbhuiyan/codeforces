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
		int c = 0,sum =0,l=0;
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		for (int i = 0; i < n; ++i)
			{
				sum = sum+arr[i];
				if (arr[i]%2==0)
				c++;
			}
		// if (c<n)
		// 	cout<<"as"<<endl;
		// else{
			
			while(sum%2==0){
				l++;
				sum = sum/2;
			}
			cout<<l+2<<endl;
		//}


	}	
}
