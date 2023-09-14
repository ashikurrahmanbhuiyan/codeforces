#include <bits/stdc++.h>
using namespace std;
#define el                "\n"
#define in(a)             int a=1; cin >> a;
#define int               long long int
#define vi                vector<int>
#define gcd(a,b)          __gcd(a,b)
#define lcm(a,b)          (a*b)/__gcd(a,b)  
#define lb(arr,n,t)       lower_bound(arr,arr+n,t)-arr
#define rep               for (int i = 0; i < n; i++)
#define repi(i,a,n)       for (int i = a; i < n; i++)
#define mod               1000000007
#define big               9223372036854775807
int partition(int array[], int low, int high) {
  int pivot = array[high];
  int i = (low - 1);
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      i++;
      if(array[i]%2 == 0 && array[j]%2==0){
      swap(array[i], array[j]);}
      else if(array[i]%2 == 1 && array[j]%2==1){
      swap(array[i], array[j]);}
    }
  }
  if(array[i+1]%2 == 0 && array[high]%2==0)
  swap(array[i + 1], array[high]);
  else if(array[i+1]%2 == 1 && array[high]%2==1)
  swap(array[i + 1], array[high]);
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}


int32_t main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("/home/ashik/Documents/input.txt","r",stdin);
#endif
in(t);while(t--){
    int n;cin>>n;int arr[n]; rep cin>>arr[i];
  quickSort(arr, 0, n - 1);
  int z=0;
  for(int i = 0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
        z=1;break;
      }
    }
    if(z==0)
    cout<<"YES"<<el;
else cout<<"NO"<<el;
}
}