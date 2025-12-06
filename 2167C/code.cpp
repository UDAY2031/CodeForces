#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        bool has_even = false;
        bool has_odd = false;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            if(!(cin >> arr[i])) return 0;
            
            if(arr[i] % 2 == 0){
                has_even = true;
            }else{
                has_odd = true;
            }
        }
        
        if(has_even && has_odd){
            sort(arr.begin(), arr.end());
        }
        
        for(int i = 0; i < n; i++){
            cout << arr[i] << (i == n-1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}
