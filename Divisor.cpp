  /*----------------------------*/
 /*          Mahfuz            */
/*----------------------------*/
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
	int sz = sqrt(n);
	vector <int> divisors;
	for(int i = 1; i <= sz; i++){
		if(n % i == 0){
			divisors.push_back(i);
			if(n / i != i) divisors.push_back(n/i);
		}
	}
	sort(divisors.begin(), divisors.end());

	for(auto u:divisors) cout << u << " ";
	cout << "\n";
}
int main() {
    int tt; cin >> tt;
    int i = 1;
    while(tt--){
        cout << "Case " << i << ": ";
        solve();
        i++;
    }
    return 0;
}
