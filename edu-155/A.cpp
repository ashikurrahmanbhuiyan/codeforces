#include <bits/stdc++.h>
int main(){
int = t; cin>>t ;while(t--){
    int n;cin>>n;int a[n],b[n];
    for(int i = 0;i<n;i++)
        cin>>a[i]>>b[i];
    int x=a[0],y=b[0], ans = a[0];
    for(int i = 1;i<n;i++){
    	if(a[i]>=x && b[i]>=y){
    		ans = -1;
    	}
    }
    cout<<ans<<el;
  }
}