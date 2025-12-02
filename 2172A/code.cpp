#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int g, c, l;
        
    cin >> g >> c >> l;
        
    int maxi = max(g, max(c,l));
    int mini = min(g, min(c,l));
        
        
    if(maxi - mini >= 10){
        cout << "check again" << endl;
    }else{
        vector<int> v = {g,c,l};
        sort(v.begin(), v.end());
        cout << "final " << v[1] << endl; 
    }
    return 0;
}
