//
// Created by 王拓 on 2021/1/10.
//
#include <iostream>
#include <vector>
#include <cmath>
#include <limits.h>
using namespace std;
int dp[500+5][500+5];
int main(){
    int n;
    cin >> n;
    vector<vector<int>>trainge(n);
    for(int i = 0;i < n;i++){
        vector<int> tmp(i+1);
        for(int j = 0;j < i + 1;j++){
            cin >> tmp[j];
        }
        trainge[i] = tmp;
    }
    for(int i = 0;i < n;i++){
        for(int j = 0;j < i+1;j++) dp[i][j] = INT_MIN;
    }
    dp[0][0] = trainge[0][0];
    for(int i = 1;i < n;i++){
        for(int j = 0;j < i+1;j++){
            if(j==0) dp[i][j] = dp[i-1][j] + trainge[i][j];
            else if(j==i) dp[i][j] =dp[i-1][j-1] + trainge[i][j];
            else dp[i][j] = max(dp[i-1][j-1],dp[i-1][j])+trainge[i][j];
        }
    }
    int ans = INT_MIN;
    for(int i = 0; i < n;i++){
        ans = max(ans,dp[n-1][i]);
    }
    cout << ans << endl;
}

