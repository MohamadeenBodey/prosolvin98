#include <bits/stdc++.h>
using namespace std;
map<char,int> maps;
string s;

char getAlpha(int num){
    if(maps['A'] == num)return 'A';
    if(maps['B'] == num)return 'B';
    if(maps['C'] == num)return 'C';}

int main() {
    maps.insert(pair<char, int>('A',0));
    maps.insert(pair<char, int>('B',0));
    maps.insert(pair<char, int>('C',0));
    lp(i,3){
        cin>>s;
        if(s[1]=='>')maps[s[0]]++;
        else maps[s[2]]++;}
    if(maps['A']==1&&maps['B']==1&&maps['C']==1){pf("Impossible");return 0;}
    cout<<getAlpha(0)<<getAlpha(1)<<getAlpha(2);               
    return 0;
}
