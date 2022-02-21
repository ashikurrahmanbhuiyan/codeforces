#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		if (n == 0)
		{
			cout<<""<<endl;
		}
		else{
			char s[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>s[i];
		}
		int index = n-1;
		for (int i = 0; i < n-1; ++i)
		{
			if (s[i] <= s[i+1])
			{
				index = i;
				break;
			}
		}
		for (int i = 0; i <= index; ++i)
		{
			cout<<s[i];
		}
		for (int i = index; i >= 0; i--)
		{
			cout<<s[i];
		}
		cout<<""<<endl;
}
		t--;
	}
}