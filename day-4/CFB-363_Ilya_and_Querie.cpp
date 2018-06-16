#include <bits/stdc++.h>
using namespace std;

string str;
int    n;

int main()
{
    PLAY();
    cin >> str;
    cin >> n;
    VI dp_ser(n + 1, 0);
    dp_ser[0] = 0;
    lp(i, sz(str) - 1){
        if (str[i] == str[i + 1]){
            dp_ser[i + 1] = dp_ser[i] + 1;
		} else {
            dp_ser[i + 1] = dp_ser[i];
        }
    }
    lp(i, n){
        int x, y;
        cin >> x >> y;
        pfi1(dp_ser[y-1] - dp_ser[x-1]);
        nl;
    }
    return 0;
}
