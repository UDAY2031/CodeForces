#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    
    while(t--){
        int k,x;
        cin >>k >> x;
        
        long long ans = x;
        
        for(int i = 0; i < k; i++){
            if((ans - 1) % 3 == 0 && ((ans - 1) / 3) % 2 == 1){
                ans = (ans - 1) / 3;
            }else{
                ans = 2 * ans;
            }
        }
        
        cout << ans << "\n";
    }
    return 0;
}
