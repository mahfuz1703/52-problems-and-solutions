  /*----------------------------*/
 /*          Mahfuz            */
/*----------------------------*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt = 1;
    cin >> tt;
    while(tt--){
        int n; cin >> n;
        (n & 1 == 1)? cout << "odd\n" : cout << "even\n";
    }
    return 0;
}