#include <bits/stdc++.h>
using namespace std;
int n, k, cnt;
int main(){
    sfi2(n,k);
    VI vec(n);
    lp(i, n)
        sfi1(vec[i]);
    lp(i, n)
        if(vec[i] >= vec[k-1] && vec[i]>0)
            cnt++;    
    pfi1(cnt);
    return 0;
}

