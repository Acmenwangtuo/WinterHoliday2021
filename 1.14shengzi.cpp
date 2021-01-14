//
// Created by 王拓 on 2021/1/14.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;
bool check(double cur,vector<int>& arr,int target);
int main(){
    int n , m;
    cin >> n >> m;
    vector<int> arr(n);
    double r = 0;
    for(int i = 0;i < n; i++) {cin >> arr[i];r+=arr[i];}
    double l = *max_element(arr.begin(),arr.end());
    l = l /m;
    r = r /m;
    while (r-l > 1e-3){
        double mid = l + (r-l) / 2;
        if(check(mid,arr,m)) l = mid;
        else r = mid;
    }
//    return l;
    printf("%.2f",l);
}
bool check(double cur,vector<int>& arr,int target){
    int num = 0;
    for(int i = 0;i < arr.size();i++){
        num += (arr[i] / cur);
    }
    if (num >= target) return true;
    return false;
}
