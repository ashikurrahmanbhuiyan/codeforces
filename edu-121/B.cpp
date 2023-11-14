#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	freopen("input.txt","r",stdin);
	int t;cin>>t;
	while(t--){
	   	string a;cin>>a;
	   	int s = a.size();
	   	int arr[s];
	   	for (int i = 0; i < s; ++i)
	   		{
	   			arr[i] = a[i]-48;
	   		}
	   		int sum;
	   		int save;
	   		int count=0;
	   	for (int i = 0; i < s-1; ++i)
	   	{
	   	   if (arr[i]>0 && arr[i+1]>0)
	   	   {
	   	   	   save = i;
	   	   	   sum = arr[i]+arr[i+1];
	   	   	   break;
	   	   	   
	   	   }
	   	   count++;

	   	}
	   	if (s-1 == count)
	   	{
	   		for (int i = 0; i < s-1; ++i)
	   		{
	   			cout<<arr[i];
	   		}
	   	}
	   	else
	   	{
	   		if (sum>=10)
	   		{
	   			arr[save+1] = sum%10;
	   			sum = sum/10;
	   			arr[save] = sum%10;
	   			for (int i = 0; i < s; ++i)
	   		{
	   			cout<<arr[i];
	   		}
	   		}
	   		else
	   		{
	   			arr[save]=sum;
	   			if ((save+1)<s)
	   			{
	   				for (int i = save+1; i < s-1; ++i)
	   			{
	   				arr[i] = arr[i+1];
	   			}
	   			}
	   			for (int i = 0; i < s-1; ++i)
	   		{
	   			cout<<arr[i];
	   		}
	   			
	   		}
	   	}
	   	cout<<""<<endl;
	}
	
}