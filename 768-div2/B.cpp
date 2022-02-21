#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		 
		 int n,count = 0;cin>>n;
		 int arr[n];
		 for (int i = n-1; i >= 0; i--)
		 {
		 	cin>>arr[i];
		 }
		 if (n>1)
		 {
		 int i = 1;
		 while(i < n)
		 {
		 		if (arr[i] != arr[0])
		 		{
		 			i = 2*i;
		 			count++;
		 		}
		 		else
		 		i++;
		 		//cout<<i<<" ";
		 		
		 }
		}

		 cout<<count<<endl;
		}
	}