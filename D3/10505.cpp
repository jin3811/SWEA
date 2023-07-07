#include <bits/stdc++.h>
#define endl '\n'
#define ALL(X) X.begin(), X.end()
using namespace std;

int N;
vector<int> money;

void input() {
    cin >> N;
    money.resize(N);
    for(int& x : money) cin >> x;
}

void sol(int tc, int avg) {
    int avg = accumulate(ALL(money), 0) / N;
    sort(ALL(money));
    
    cout << "#" << tc << " " << distance(money.begin(), upper_bound(ALL(money), avg)) << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test_case;
    int T;
    // freopen("input.txt", "r", stdin);

    cin >> T;
    for(test_case = 1; test_case <= T; ++test_case) {
        input();
        sol(test_case);
    }
}