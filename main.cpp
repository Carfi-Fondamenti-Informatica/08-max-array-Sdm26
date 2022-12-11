#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    float b[n];
    for(int i=0; i<n;i++){
        cin >> b[i];
    }
    cout << max(b,n);
    return 0;
}
