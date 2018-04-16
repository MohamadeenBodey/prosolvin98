#include <bits/stdc++.h>
using namespace std;
string s1;
int cnt, x = 11;
int main() {    	
    cin >> s1;
    if (s1.length() < 2){cout << 0;return 0;}
    while(x >= 10){
        x = 0;
        lp(i, s1.length()){x += (s1[i] - '0'); }
        s1 = to_string(x);
        cnt++;
    	}
    pf("%d", cnt);
    	return 0;
}
