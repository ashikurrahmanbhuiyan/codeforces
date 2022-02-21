#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("C.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	   int n;cin>>n;
	   int arr[n];
	   for (int i = 0; i < n; ++i)
	   {
	   	cin>>arr[i];
	   	while(arr[i]>n)
	   	    arr[i]=arr[i]/2;
	   }
	   for (int i = 0; i < n; ++i)
	   {
	   	cout<<arr[i]<< " ";
	   }
	   cout<<""<<endl;
	}
	
}