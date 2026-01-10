#include <iostream>
#include <vector>
using namespace std;

string longest_common_prefix(vector<string> strs) {
    string p = strs[0];
    for (int i = 1; i < strs.size(); i++)
        while (strs[i].find(p) != 0)
            p = p.substr(0, p.length() - 1);
    return p;
}

int main() {
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    cout << longest_common_prefix(v);
    return 0;
}
