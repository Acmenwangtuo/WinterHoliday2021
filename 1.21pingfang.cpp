//
// Created by 王拓 on 2021/1/21.
//
#include <iostream>
#include <vector>
using namespace std;
void print(int n){
    vector<vector<int>> grid(n,vector<int>(n,0));
    for(int i = 0;i < n;i++){
        int cur = 1;
        for(int j = i;j < n;j++){
            grid[i][j] = cur++;
        }
    }
    for(int i = 0;i < n;i++){
        int cur = 1;
        for(int j = i;j >= 0;j--){
            grid[i][j] = cur++;
        }
    }
    for(int i = 0;i < n;i++){
        for(int j =0;j < n;j++) cout << grid[i][j] << " ";
        cout << endl;
    }
}
int main(){
    int n;
    while(cin >> n){
        if(n == 0) break;
        print(n);
    }
    return 0;
}