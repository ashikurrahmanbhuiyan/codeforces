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
		int c = 0;
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
			if(arr[i]==0){
				c++;
			}
		}
		int d  = n - c;
		if (c>d){
			while(c>d){
				cout<<0;
				c--;
			}
			while(c>0 || d>0){
				cout<<0;
				c--;
				cout<<1;
				d--;
			}
		}
		else if (d>c){
			while(c<d){
				cout<<1;
				d--;
			}
			while(c>0 || d>0){
				cout<<0;
				c--;
				cout<<1;
				d--;
			}
		}
		cout<<endl;
	}	
}
