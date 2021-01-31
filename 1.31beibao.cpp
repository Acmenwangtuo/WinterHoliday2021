//
// Created by 王拓 on 2021/1/31.
//
#include <iostream>
#include <vector>
#include <iostream>
using namespace std;
const int N = 30000+5;
const int M = 25 + 5;
int dp[M][N];
int main(){
    int n , m;
    cin >> n >> m;
    vector<pair<int,int>>goods(m+1);
    memset(dp,0,sizeof(dp));
    for(int i = 1;i <= m;i++){
        int a,b;
        cin >> a >> b;
        goods[i] = make_pair(a,a*b);
    }
    for(int i = 1;i <= m;i++){
        for(int j = 0;j <= n;j++){
            if(j < goods[i].first)    dp[i][j]  = dp[i-1][j];
            else dp[i][j] =  max(dp[i-1][j], dp[i-1][j - goods[i].first] + goods[i].second);
        }
    }
    cout << dp[m][n] << endl;
}

