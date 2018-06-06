#include <bits/stdc++.h>
using namespace std;
#define eq3(a,b,c) a==b && b==c
bool is_win(string board){
    bool hir = ( 
        eq3(board[0], board[1], board[2]) && board[0] != '.'|| 
        eq3(board[3], board[4], board[5]) && board[3] != '.'||
        eq3(board[6], board[7], board[8]) && board[6] != '.'
    );
    
    bool vir = (
        eq3(board[0], board[3], board[6]) && board[0] != '.'|| 
        eq3(board[1], board[4], board[7]) && board[1] != '.'||
        eq3(board[2], board[5], board[8]) && board[2] != '.'
    );
    
    bool diagonals = (
        eq3(board[0], board[4], board[8]) && board[0] != '.'||
        eq3(board[2], board[4], board[6]) && board[2] != '.'
    );
}

int main(){
    int t;
    sfi1(t);
    while(t--){
        string board="", ans="no";
        lp(i, 3){
            string cur;
            cin>>cur;
            board+=cur;
        }
        
        queue<pair<string, bool> >qu;
        string cur = ".........";
        
        qu.push({cur, 1});
        
        while(sz(qu)){
            cur = qu.front().first; 
            bool cur_player = qu.front().second;
            qu.pop();
            if(cur == board){ans = "yes"; break;}
            if(is_win(cur))continue;
            lp(i, 9){
                if(cur[i] == '.'){
                    cur[i] = (cur_player?'X':'O');
                    if(cur[i] == board[i]) qu.push({cur, 1^cur_player});
                    cur[i] = '.';
                }
            }
        }//end of while
        cout<<ans<<"\n";
    }
    return 0;
}

