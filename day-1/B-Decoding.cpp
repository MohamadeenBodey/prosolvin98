/* 
 * File:   main.cpp
 * Author: bodey
 *
 * Created on April 7, 2018, 11:53 PM
 */

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
int n;
string str;

int main() {
    sfi1(n);cin>>str;
    int strLen = str.length(), mid = (ceil(strLen/2.0)-1),right = mid+1, left = mid-1;
    char str2[2001];
    str2[mid] = str[0];    
    int met = (strLen % 2 == 1);
    FORI(i, 1,strLen)
        (i % 2 == met)?str2[left--] = str[i]:str2[right++] = str[i];
    str2[strLen] = '\0';
    cout<<str2;
    return 0;
}


