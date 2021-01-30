//
// Created by 王拓 on 2021/1/30.
//
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const int N = 100+5;
int data[N][N];
int dp[N][N];
void qianzhui(int m,int n){
    for(int i = 1; i <= m;i++){
        for(int j = 1;j <=  n;j++){
            dp[i][j]=data[i][j]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
        }
    }
}
int query(int x1,int y1,int x2,int y2){
    return dp[x2][y2]-dp[x1-1][y2]-dp[x2][y1-1]+dp[x1-1][y1-1];
}
int main(){
    memset(dp,0,sizeof(dp));
    memset(data,0,sizeof(data));
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++) for(int j = 1;j <=n ;j++) cin >> data[i][j];
    qianzhui(n,n);
    int ans = INT_MIN;
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= n;j++){
            for(int p = i;p <= n;p++){
                for(int q = j; q <= n;q++){
                    ans = max(ans,query(i,j,p,q));
                }
            }
        }
    }
    cout << ans << endl;
}
