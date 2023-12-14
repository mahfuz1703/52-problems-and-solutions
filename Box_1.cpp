  /*----------------------------*/
 /*          Mahfuz            */
/*----------------------------*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cout << "*";
            }
            cout << "\n";
        }
        if(tt > 0) cout << "\n";
    }
    return 0;
}