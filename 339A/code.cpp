#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    
    vector<char> res;
    
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            res.push_back(s[i]);
        }
    }
    sort(res.begin(), res.end());
    for(int i = 0; i < res.size(); i++){
        cout << res[i];
        if(i < res.size()-1){
            cout << "+";
        }
    }
    return 0;
}
