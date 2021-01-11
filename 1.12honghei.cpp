//
// Created by 王拓 on 2021/1/12.
//
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
int ans = 0;
void dfs(vector<vector<char>>& grid,int i,int j){
    if(grid[i][j] == '.'){
        ans++;
        grid[i][j] = '@';
    }
    for(int k = 0;k < 4; k++){
        int a = i + dir[k][0];
        int b = j + dir[k][1];
        if(a>=0 && a < grid.size() && b >= 0 && b < grid[0].size()&&grid[a][b]=='.'){
            dfs(grid,a,b);
        }
    }
}
int main(){
    int n,m;
    while(true) {
        cin >> n >> m;
        if(n==0 && m == 0) break;
        vector<vector<char>> grid(m, vector<char>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> grid[i][j];
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '@')
                    dfs(grid, i, j);
            }
        }
        cout << ans + 1 << endl;
        ans = 0;
    }
}

