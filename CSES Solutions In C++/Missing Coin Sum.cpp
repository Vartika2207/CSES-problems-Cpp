#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     
     int n;
     cin  >> n;
     vector<ll> arr(n); 
     for(int i=0; i<n; i++){
        cin >> arr[i];
     }
     sort(arr.begin(), arr.end());
     ll ans=1;
     for (auto a: arr){
         if(ans>=a){
            ans+=a;
         }
         else{
            cout << ans << endl;
            return 0;
         }
     }
    cout << ans ; 
    return 0;
