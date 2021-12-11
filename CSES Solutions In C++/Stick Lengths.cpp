#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; 
    cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());
    if(n&1){
        long long cost=0;
        long long x=a[n/2];
        for(auto i:a){
            cost+=abs(x-i);
        }
        cout<<cost;
        
    }
    else{
        long long cost1=0;
        long long cost2=0;
        long long x1=a[n/2];
        long long x2=a[n/2+1]; 
        for(auto i:a){
            cost1+=abs(x1-i);
            cost2+=abs(x2-i);
        }
        cout<<min(cost1,cost2);
        
    }
  
    return 0;
}