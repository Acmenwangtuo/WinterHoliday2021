////
//// Created by 王拓 on 2021/2/3.
////
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <queue>
//using namespace std;
//const int M = 200+5;
//char grid[M][M];
//bool vis[M][M];
//int dir[4][4] = {{-1,0},{1,0},{0,-1},{0,1}};
//int solve(){
//    memset(grid,0,sizeof(grid));
//    memset(vis, false,sizeof(vis));
//    int r , c;
//    cin >> r >> c;
//    for(int i = 0;i < r;i++) scanf("%s",grid[i]);
//    queue<pair<int,int>> q;
//    for(int i = 0; i < r;i++) {
//        for(int j = 0;j < c;j++){
//            if(grid[i][j] == 'S'){
//                q.push(make_pair(i,j));
//                vis[i][j] = true;
//                break;
//            }
//        }
//    }
//    int ans = 0;
//    bool flag = false;
//    while(!q.empty()){
//        int sz = q.size();
//        while(sz--){
//            auto temp = q.front();
//            q.pop();
//            int x = temp.first;
//            int y = temp.second;
//            if(grid[x][y] == 'E'){
//                flag = true;
//                return ans;
//            }
//            for(int i = 0;i < 4;i++){
//                int new_x = x + dir[i][0];
//                int new_y = y + dir[i][1];
//            if(new_x>=0&&new_x<r&&new_y>=0&&new_y<c&&grid[new_x][new_y]!='#'&&!vis[new_x][new_y])
//                q.push(make_pair(new_x,new_y));
//                vis[new_x][new_y] = true;
//            }
//        }
//        ans++;
//    }
//    if(!flag) return -1;
//    return ans;
//
//}
//int main(){
//    int T;
//    cin >> T;
//    while(T--){
//        int res = solve();
//        if(res!=-1) cout << res << endl;
//        else cout << "oop!" << endl;
//    }
//}
