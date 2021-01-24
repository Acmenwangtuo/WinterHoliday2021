//
// Created by 王拓 on 2021/1/25.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>height(n,0);
    //因为修建过的所有树差值都在一个长度小于等于17的区间，我们来枚举这个区间，对这个区间内外的数进行修建
    //不能贪心的原因是因为具有后效性
    for(int i = 0;i < n;i++) cin >> height[i];
    int ans = INT_MAX;
    for(int i = 1;i <= 100;i++){
        int temp = 0;
        for(int j = 0; j < height.size();j++){
            if(height[j]<i) temp += (height[j]-i) * (height[j]-i);
            if((height[j]-i)>17) temp += (abs(height[j]-i)-17) * (abs(height[j]-i)-17);
        }
        ans = min(ans,temp);
    }
    cout << ans << endl;
}

