//
// Created by 王拓 on 2021/1/19.
//
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main(){
    int n ,target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    vector<pair<int,int>> ans;
    unordered_map<int,int>mp;
    for(int i = 0;i < n;i++){
        if(mp.count(target - arr[i])){
            ans.push_back(make_pair(target-arr[i],arr[i]));
        }
        mp[arr[i]] = i;
    }
    if (ans.size() == 0)
        cout << "No Solution" <<endl;
    else{
        sort(ans.begin(),ans.end(),[&](pair<int,int> a1,pair<int,int> a2){
            return a1.first <a2.first;
        });
        cout << ans[0].first << " " << ans[0].second <<endl;
    }
    return 0;
}
