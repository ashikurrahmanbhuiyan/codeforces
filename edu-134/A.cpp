#include <bits/stdc++.h>
#define el "\n"
#define ll long long
#define rep for (int i = 0; i < n; i++)
#define repi(i,a,n) for (int i = a; i < n; i++)
#define w(t) int t;cin>>t;while(t--)
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	#endif
	w(t){
		string s1;string s2;
		cin>>s1;cin>>s2;
		set<char>s;
		s.insert(s1[0]);
		s.insert(s1[1]);
		s.insert(s2[0]);
		s.insert(s2[1]);
		cout<<s.size()-1<<endl;;
	}
}