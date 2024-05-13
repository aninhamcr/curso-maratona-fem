#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

int main() {
    int flag = 0;
    string str;
    cin >> str ;

    vector<string> vetor;
    vetor = {"ACE","BDF","CEG","DFA", "EGB", "FAC", "GBD"};
    
    for(string a : vetor) {
        if(a.compare(str) == 0) {
            cout << "Yes" << "\n";
            flag = 1;
        }
    }

    if(flag == 0) cout << "No" << "\n";

    return 0;
}
