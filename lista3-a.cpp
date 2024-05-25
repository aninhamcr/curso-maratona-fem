#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i,j,x,q,a,b;
    long long int soma = 0;
    cin >> n >> q;
    vector<long long int> num(n);

    for(i=0;i<n;i++) {
        cin >> x;
        num[i] = x + num[i-1];
    }

    for(i=0;i<q;i++) {
        cin >> a >> b;  
        soma = num[b-1] - num[a-2];
        
        cout << soma << "\n";

    }

    return 0;
}
