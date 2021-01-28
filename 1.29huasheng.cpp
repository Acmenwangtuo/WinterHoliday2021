//
// Created by 王拓 on 2021/1/29.
//
#include <iostream>
#include <vector>
using namespace std;
int dp[100+5][100+5];
int main(){
    int N;
    cin >> N;
    while(N--){
        int r,c;
        cin >> r >> c;
        vector<vector<int>>grid(r,vector<int>(c,0));
        for(int i = 0; i < r;i++) for(int j = 0; j < c;j++) cin >> grid[i][j];
        memset(dp,0,sizeof(dp));
        for(int i = 1;i <= r;i++){
            for(int j = 1;j <= c;j++){
                dp[i][j] = max(dp[i-1][j],dp[i][j-1])+grid[i-1][j-1];
            }
        }
        cout << dp[r][c] << endl;
    }
}