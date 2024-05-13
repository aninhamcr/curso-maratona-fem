#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,i,x = 0;
    cin >> n;
    set<int> num; //estrutura que só recebe números não-repetidos

    for(i=0;i<n;i++) {
        cin >> x;
        num.insert(x);
    }

    cout << num.size() << "\n";

    return 0;
}
