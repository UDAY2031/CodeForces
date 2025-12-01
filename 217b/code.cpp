#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int a;
    cin >> a;
    
    while(a--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        vector<int> h1(26, 0);
        vector<int> h2(26, 0);
        
        for(auto i : s){
            h1[i - 'a']++;
        }
        for(auto i : t){
            h2[i - 'a']++;
        }
        bool ok = true;
        for(int i = 0; i < 26; i++){
            if(h1[i] != h2[i]){
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
