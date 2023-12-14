  /*----------------------------*/
 /*          Mahfuz            */
/*----------------------------*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt = 1;
    cin >> tt;
    while(tt--){
        string n; cin >> n;
        int sz = n.size();
        ((n[sz-1] - '0') & 1 == 1)? cout << "odd\n" : cout << "even\n";
    }
    return 0;
}