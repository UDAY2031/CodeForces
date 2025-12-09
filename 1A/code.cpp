#include<bits/stdc++.h>
using namespace std;
 
int main(){
    double n, m, a;
    
    cin >> n >> m >> a;
    
    long long res = (long long)ceil(n/a) * (long long)ceil(m/a);
    
    cout << res <<endl;
    return 0;
}
