#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    //ofstream cout;
    //cout.open ("output.txt");
    int n,k=0;
    cin>>n;
    string s,l,r;
    char mid;
    cin>>s;
    mid=s[0];
    for(int i=n-2;i>0;i-=2,k++){
        cout<<s[i];
    }
    cout<<mid;
    k=0;
    if(n&1){
    for(int i=2;i<n;i+=2,k++){
        cout<<s[i];
    }}
    else{
        for(int i=1;i<n;i+=2,k++){
            cout<<s[i];
        }
        return 0;
    }
}