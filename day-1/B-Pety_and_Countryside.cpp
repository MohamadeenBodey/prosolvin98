/* 
 * File:   main.cpp
 * Author: bodey
 *
 * Created on April 7, 2018, 11:53 PM
 */

// Sum=> 2 Def => 7
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
int n, arr[1001];
int main() {
    sfi1(n);
    lp(i, n)sfi1(arr[i]);
    
    int cnt, max_cnt = 1, cur;
    lp(i, n){
        cnt = -1;
        cur = arr[i];
        FORI(j, i,n){
            if(arr[j] <= cur ){
                cur = arr[j];cnt++;
            }else
                break;
        }//end of FORI
        cur = arr[i];
        FORD(j,i,-1){
            if(arr[j] <= cur ){
                cur = arr[j];
                cnt++;
            }else
                break;
        }//end of FORD
        if(cnt > max_cnt) max_cnt = cnt;
    }//end of lp
    pf("%d", max_cnt);
    return 0;
}


