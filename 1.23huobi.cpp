//
// Created by 王拓 on 2021/1/23.
//
#include <iostream>
#include <vector>
#include <cstdio>
#include <string.h>
using namespace std;
const int N = 10000+5;
long long dp[N];
int main(){
    int v , n;
    cin >> v >> n;
    vector<int>value(v);
    memset(dp,0,sizeof(dp));
    for(int i = 0;i < v;i++){
        cin >> value[i];
    }
    dp[0] = 1;
    for(int i = 0;i < v;i++){
        for(int j=1;j<=n;j++){
            if(j >= value[i]) dp[j] += dp[j-value[i]];
        }
    }
    cout <<  dp[n];
}