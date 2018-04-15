#include <bits/stdc++.h>
using namespace std;
// sum => 1 Def => 5
int main() {
    int h, n;
    scanf("%d%d",&n,&h);
    int sum = 0;
    while(n--)
    {
        int x;
        scanf("%d",&x);
        if(x>h)sum+=2;
        else sum+=1;
    }
    printf("%d",sum);
    
    return 0;
}

