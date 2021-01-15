//
// Created by 王拓 on 2021/1/15.
//
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool check(vector<vector<int>>& arr,int k,int cur){
    int tot = 0;
    for (int i = 0; i < arr.size(); ++i) {
        int w = arr[i][0] / cur;
        int h = arr[i][1] / cur;
        tot += (w * h);
        if(tot >= k) return true;
    }
    return false;
}
int main(){
    int n , k;
    cin >> n >> k;
    vector<vector<int>>arr(n,vector<int>(2,0));
    int r = 0;
    for(int i = 0;i < n;i++){
        cin >> arr[i][0] >> arr[i][1];
        r = max({r,arr[i][0],arr[i][1]});
    }
    int l = 1;
    while(l < r){
        int mid = l + (r-l+1)/2;
        if(check(arr,k,mid)) l = mid;
        else r = mid-1;
    }
    cout << l-1 << endl;
}
