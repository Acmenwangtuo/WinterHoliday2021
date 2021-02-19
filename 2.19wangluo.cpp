//
// Created by 王拓 on 2021/2/19.
//
#include <iostream>
#include <cstring>
using namespace std;
const int N = 100010;
int e[N] , ne[N] ,h[N] , idx;
int f[N]; // f[u]表示u到最远叶节点的距离，显然如果u是叶
int n,m, ans;
void add(int a,int b){ // 头插法
    e[idx] = b,ne[idx] = h[a] ,h[a] = idx++;
}
void dfs(int u){
    int a = 0, b = 0;
    for(int i = h[u];~i;i = ne[i]){
        int j = e[i];
        dfs(j);
        int t = f[j] + 1;
        if(t >= a){
            b = a;
            a = t;
        }
        else if(t > b){
            b = t;
        }
    }
    f[u] = a;
    ans = max(ans,a + b);
}

int main(){
    cin >> n >> m;
    memset(h,-1,sizeof h);
    for(int i = 2;i <= n+m;i++){
        int j;
        cin >> j;
        add(j,i);
    }
    dfs(1);
    cout << ans << endl;
}