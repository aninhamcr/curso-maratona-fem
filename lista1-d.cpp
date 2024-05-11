#include <iostream> 

using namespace std;

int main() {
    long int i,n,k, temp;
    temp = 1;
    cin >> n;

    k = n/2 + 1;
    for(i=1;i<=k;i++) {
        temp = temp*2;
        if(temp > n) {
            cout << i - 1;
            break;
        }
        
    }
 

    return 0;
}
