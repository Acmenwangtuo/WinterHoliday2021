//
// Created by 王拓 on 2021/1/9.
//
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0;i < n;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    int mid = 0;
    if (n % 2 == 1) mid = arr[n/2];
    else mid = (arr[(n-1)/2] + arr[n/2]) / 2;
    int res = 0;
    for(auto a : arr) res += abs(a-mid);
    cout << res << endl;
}

