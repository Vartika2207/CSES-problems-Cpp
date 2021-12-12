#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     int n, m;
     cin >> n >> m;
     vector<int>arr(n+1);
     vector<int> positionOf(n+1);
     for(int i=1; i<=n; i++){
         cin >> arr[i];
         positionOf[arr[i]] = i;
     }
     
     //counting inversions
     int inversions = 1;
     for(int i=1; i<n; i++){
         if(positionOf[i] > positionOf[i+1])
             inversions++;
     }
     
     
     set<pair<int, int>> updatedPair;
     //function performing task
     while(m--){
         int l, r;
         cin >> l >> r;
         
         if(arr[l] + 1 <= n )
             updatedPair.insert({arr[l], arr[l] + 1});
         if(arr[l] - 1 >= 1 )
             updatedPair.insert({arr[l] - 1, arr[l]});
         if(arr[r] + 1 <= n )
             updatedPair.insert({arr[r], arr[r] + 1});
         if(arr[r] - 1 >= 1 )
             updatedPair.insert({arr[r] - 1, arr[r]});
         
         //substracting inversions lost bcz of swaps
         for(auto swaped: updatedPair){
            if(positionOf[swaped.first] > positionOf[swaped.second])
                inversions--;
         }
         
         //doing swaps
         swap(arr[l], arr[r]);
         positionOf[arr[l]] = l;
         positionOf[arr[r]] = r;
         
         //adding inversions occured affter swaps
         for(auto swaped: updatedPair){
            if(positionOf[swaped.first] > positionOf[swaped.second])
                inversions++;
         }
         cout << inversions << endl;
         updatedPair.clear();
     }
     
 
    return 0;
}