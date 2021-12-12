#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     int n;
     cin >> n;
     vector<pair<int, int>>arr(n);
     for(int i=0; i<n; i++){
         int ele;
         cin >> ele;
         arr[i]={ele, i};
     }
     
     //function performing task
     sort(arr.begin(), arr.end());
     int backwardArrows=0;
     for(int i=0; i<n-1; i++){
         if(arr[i].second > arr[i+1].second){
             backwardArrows++;
         }
     }
     cout << backwardArrows+1 <<endl;
  
    return 0;
}