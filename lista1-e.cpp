#include <iostream> 
#include<bits/stdc++.h>

using namespace std;

int main() {
    int caso,i,j,n,k;
    cin >> caso;

    for(i=0;i<caso;i++) {
        cin >> n >> k;
   //     vector<int> vetor(n)

        for(j=n-k;j<=n;j++) {
            cout << j << " ";
        }
        for(j=n-k-1;j!=0;j--) {
            cout << j << " ";
        }
        cout << "\n";
    }
 

    return 0;
}
