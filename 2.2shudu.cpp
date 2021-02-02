//
// Created by 王拓 on 2021/2/2.
//
#include <iostream>
#include <vector>
#include <unordered_set>
#include <cmath>
int tot = 1;
using namespace std;
bool judge_nxn(int i, int j,vector<vector<int>>& grid){
    int n = grid.size();
    unordered_set<int> s;
    for(int p = i;p < i + int(sqrt(n));p++){
        for(int q = j; q < j + int(sqrt(n));q++){
            if(grid[p][q] > n || grid[p][q] <= 0 || s.count(grid[p][q]) ) return  false;
            s.insert(grid[p][q]);
        }
    }
    return true;
}
bool judge(vector<vector<int>>& grid){
    //判断行
    int n = grid.size();
    unordered_set<int> s;
    s.clear();
    for(auto vec:  grid){
        for(int j = 0;j < grid[0].size();j++){
            if(vec[j] > n || vec[j] <= 0 || s.count(vec[j])){
                return false;
            }
            s.insert(vec[j]);
        }
        s.clear();
    }
    //判断列
    s.clear();
    for(int j = 0;j < grid[0].size();j++){
        for(int i = 0;i < grid.size();i++){
            if(grid[i][j] > n || grid[i][j] <= 0 || s.count(grid[i][j]) ){ return false;}
            s.insert(grid[i][j]);
        }
        s.clear();
    }
    // 判断3x3
    for(int i = 0;i< grid.size();i +=int(sqrt(n)) ){
        for(int j = 0;j < grid[0].size();j+=int(sqrt(n))){
            if(!judge_nxn(i,j,grid)) { return false;}
        }
    }
    return true;
}
void solve(){
    int n;
    cin >> n;
    int m = n * n;
    vector<vector<int>>grid(m,vector<int>(m,0));
    for(int i = 0;i < m;i++){
        for(int j = 0;j < m;j++)
            cin >> grid[i][j];
    }
    string res = judge((grid)) ? "Yes" : "No";
    printf("Case #%d: " , tot++);
    cout << res << endl;
    // string res = judge((grid)) ? "Yes" : "No";
    // cout  <<  res << endl;
}
int main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}
