#include <bits/stdc++.h>

using namespace std;
#define sf scanf
#define pf printf
#define sfi1(a1) sf("%d", &a1)
#define sfi2(a1, a2) sf("%d%d",&a1, &a2)
#define pfi1(a1) pf("%d", a1)
#define FORI(i, s, e) for(int i=s; i<e; i++)
#define FORD(i, s, e) for(int i=s; i>e; i--)
#define lp(i, e) FORI(i, 0, e)
int n, a,arr[101], cnt;

int main() {
    sfi2(a, n);n-=1;
    lp(i, a){
        sfi1(arr[i]);
        if(arr[i])
            cnt++;
    }
        
    for(int i=n, j=n; i>=0 && j < a ; i--, j++){
        if(arr[i]+arr[j] == 1)
            cnt--;
    }
	pf("%d", cnt);

    return 0;
}


