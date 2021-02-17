//
// Created by 王拓 on 2021/2/17.
//
#include <iostream>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
const int maxn = 100+5;
int grid[maxn][maxn];
int seen[maxn][maxn];
vector<vector<int>> dir = {{-1,0},{1,0},{0,-1},{0,1}};
bool InAren(int i,int j,int n){
    if(i >= 1 && i <= n && j >= 1 && j <= n) return true;
    return false;
}
int main(){
    memset(grid,0,sizeof(grid));
    int n,k,m,d;
    cin >> n >> m >> k >> d;
    queue<pair<int,int>> q;
    memset(seen,0,sizeof(seen));
    int res = 0;
    for(int i =0;i < m;i++){
        int a,b;
        cin >> a >> b;
        grid[a][b] = -1;
        q.push(make_pair(a,b));
        seen[a][b] == 1;
    }
    for(int i = 0;i < k;i++){
        int a ,b,c;
        cin >> a >> b >> c;
        grid[a][b] += c;
    }

    for(int i = 0;i < d;i++){
        int a ,b;
        cin >> a >> b;
        seen[a][b] = 1;
    }
    int steps = 0;
    while(!q.empty() && k){
        int sz = q.size();
        while(sz--){
            auto& [a,b] = q.front();
            q.pop();
            for(int i = 0;i < 4;i++){
                int x = a + dir[i][0];
                int y = b + dir[i][1];
                if(InAren(x,y,n)&&seen[x][y]!=1){
                    q.push(make_pair(x,y));
                    seen[x][y] = 1;
                    if(grid[x][y] > 0){
                        res += grid[x][y] * (steps+1);
                        k--;
                    }
                }
            }
        }
        steps++;
    }
    cout << res << endl;

}
/*
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using P = pair<int, int>;
static constexpr int dirs[] { 0, -1, 0, 1, 0 };

int n, m, k, d, x, y, amount;

int main(void) {
    cin >> n >> m >> k >> d;
    // obstacle(-1), shops(-1), customers(> 0)
    vector<vector<int>> grid(n, vector<int>(n, 0));

    queue<P> q;
    while (m--) { // m 家店
        scanf("%d %d", &x, &y);
        grid[n - y][x - 1] = -1;

        q.emplace(x - 1, n - y);
    }
    for (int i = 0; i < k; ++i) { // k 位顾客
        scanf("%d %d %d", &x, &y, &amount);
        grid[n - y][x - 1] += amount;
    }
    while (d--) { // d个障碍物
        scanf("%d %d", &x, &y);
        grid[n - y][x - 1] = -1;
    }

    long ans = 0, steps = 0;
    while (not q.empty() && k) {
        size_t sz = q.size();
        while (sz--) {
            const auto [x, y] = q.front(); q.pop();
            for (int i = 0; i < 4; ++i) {
                int nx = x + dirs[i], ny = y + dirs[i + 1];
                if (nx < 0 || ny < 0 || nx == n || ny == n || grid[ny][nx] < 0)
                    continue;
                if (grid[ny][nx] > 0) {
                    ans += (steps + 1) * grid[ny][nx];
                    --k;
                }
                q.emplace(nx, ny);
                grid[ny][nx] = -1; // mark as seen
            }
        }
        ++steps;
    }

    printf("%ld\n", ans);
}

*/