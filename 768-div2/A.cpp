#include <bits/stdc++.h>
using namespace std;
bool dis(int a,int b){
	return a>b;
}
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
		 int arr[] = {1,3,4,5,32,4,9,5,6,4,3};
		 sort(arr,arr+11,dis);
		 for(auto a:arr)
	{
		cout<<a<<" ";
	}
}
	
}