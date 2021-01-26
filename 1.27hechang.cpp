//
// Created by 王拓 on 2021/1/27.
//lc1671. 得到山形数组的最少删除次数
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
const int N = 100+5;
int dp1[N];
int dp2[N];
int main(){
    int n;
    cin >> n;
    vector<int>arr (n,0);
    memset(dp1,0,sizeof(dp1));
    memset(dp2,0,sizeof(dp2));
    for(int i = 0;i <= n;i++){
        dp1[i] = 1;
        dp2[i] = 1;
    }
    for(int i = 0;i < n;i++) {cin >>  arr[i];}
    for(int i = 0;i < n;i++) cout << arr[i] << ',';
    for(int i = 0;i < arr.size();i++){
        for(int j = 0;j < i;j++){
            if (arr[i] > arr[j]) dp1[i] = max(dp1[i],dp1[j] + 1);
        }
    }
    int ans = 0;
    for(int i = n;i >= 0;i--){
        for(int j = n-1;j > i;j--){
            if(arr[i] > arr[j]) dp2[i] = max(dp2[i],dp2[j] + 1);
        }
    }
    for(int i = 0;i < n;i++){
        if(dp1[i] > 1 && dp2[i] > 1) ans = max(ans,dp1[i] + dp2[i]-1);
    }
    if(ans == 0) cout << 0 << endl;
    cout << n - ans << endl;
}

