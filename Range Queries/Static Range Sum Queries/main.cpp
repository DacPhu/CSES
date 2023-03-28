#include <iostream>

#define int long long

using namespace std;

const int N = 2e5 + 5;
int n, a[N], q;
 
signed main(){
    cin >> n >> q;
    a[0] = 0;
    for(int i = 1; i <= n; ++i)
        cin >> a[i],
        a[i] += a[i - 1];
    while(q--){
        int l , r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << "\n";
    }
    return 0;
}