#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define check_bit(n, b) (n >> b) & 1

vector<int> giveSet(vector<int>nums){
  int n = nums.size();
  int lm = 1LL<<n;
  vector<int>ans;
  for(int i = 0; i < lm; i++){
    int sum = 0;
    for(int j = 0; j < n; j++){
      if(check_bit(i, j)){
        sum += nums[j];
      }
    }
    ans.push_back(sum);
  }
  return ans;
}



void solvetc(int tt){
    int n, x;
    cin >> n >> x;
    vector<int>arr(n);
    for(auto &i: arr) cin >> i;
    vector<int>arr1, arr2;
    for(int i = 0; i < n; i++){
        if(i < n/2) arr1.pb(arr[i]);
        else arr2.pb(arr[i]);
    }
    vector<int>set1 = giveSet(arr1);
    vector<int>set2 = giveSet(arr2);
    sort(all(set2));
    int ans = 0;
    for(auto a: set1){
        int need = x - a;
        ans += upper_bound(all(set2), need) - lower_bound(all(set2), need);
    }
    //cout << ans << endl;
}

int32_t main(){
    freopen("/home/ashik/Documents/input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solvetc(1);
    return 0;
}
