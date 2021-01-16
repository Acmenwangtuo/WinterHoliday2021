//
// Created by 王拓 on 2021/1/16.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int l , n;
    cin >> l >> n;
    vector<vector<int>> arr(n,vector<int>(2,0));
    for(int i = 0;i < n;i++){
        cin >> arr[i][0] >> arr[i][1] ;
    }
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    ans.push_back(arr[0]);
    for(int i = 1; i < n;i++){
        if (arr[i][0] > ans.back()[1]+1) {ans.push_back(arr[i]);continue;}
        else if(arr[i][1] <= ans.back()[1]) continue;
        else{
            int l = min(ans.back()[0],arr[i][0]);
            int r = max(ans.back()[1],arr[i][1]);
            ans.pop_back();
            ans.push_back({l,r});
        }
    }
    int res = 0;
    for(auto a : ans){
//        cout << a[0] << " " << a[1] << endl;
        res += (a[1]-a[0]+1);
    }
    cout << l -res + 1  << endl;
}

