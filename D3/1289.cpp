#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void bitChange(string& bin, int pos) {
    for (int i = pos; i < bin.length(); i++) {
        bin[i] = !(bin[i] - '0') + '0';
    }
}

int sol(string& bin) {
    string copyBin = "";
    int cnt = 0;
    
    for (int i = 0; i < bin.length(); i++) copyBin += "0";

    for (int i = 0; i < bin.length(); i++) {
        if (bin[i] != copyBin[i]) {
            bitChange(copyBin, i);
            cnt++;
            if (bin == copyBin) break;
        }
    }
    return cnt;
}

int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    int T;
    string bin;

    cin >> T;

    for(test_case = 1; test_case <= T; ++test_case) {
        cin >> bin;
        cout << "#" << test_case << " " << sol(bin) << endl;
    }

    return 0;
}