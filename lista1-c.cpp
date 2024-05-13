#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int caso;
    int i,m;
    cin >> caso;
    for(i=0;i<caso;i++) {
        int v[3];
        cin >> v[0] >> v[1] >> v[2] >> m;
        sort(v,v+3); 

        if(m < (v[2] - (v[0]+v[1]+1))) {
            cout << "NO" << "\n";
        } 
        else if(m > (v[0]+v[1]+v[2] - 3)){
            cout << "NO" << "\n" ;
        }
        else {
            cout << "YES" << "\n";
        }
        
        
    }   
    

    return 0;
}
