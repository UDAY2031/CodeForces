#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    vector<vector<int>> arr(5, vector<int>(5));
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    
    int a1 = 2, b1 = 2;
    int a2 = -1, b2 = -1;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                a2 = i;
                b2 = j;
            }
        }
    }
    
    int ans = abs(a1 - a2) + abs(b1 - b2);
    
    cout << ans<<endl;
    
    return 0;
}
