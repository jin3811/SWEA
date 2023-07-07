#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

// a^b == a^(b/2) * a(b/2)
// 분할 정복으로 이를 구현한다.
int sol(int base, int exp) {
    if (exp == 0) return 1;
    if (exp == 1) return base;
    else {
        if (exp & 1) return base * sol(base, exp / 2) * sol(base, exp / 2); 
        else return sol(base, exp / 2) * sol(base, exp / 2);
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    
    int test_case = 10;
    int T;
    int base, exp;

    while(test_case--) {
        cin >> T >> base >> exp;
        cout << "#" << T << " " << sol(base, exp) << endl;
    }

    return 0;
}