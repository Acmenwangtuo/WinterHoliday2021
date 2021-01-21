//cpp
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 15;
int res, path[N];//res记录答案个数， path 保存答案

bool col[N], dg[N * 2], udg[N * 2];//列，左斜对角线，右斜对角线是否有棋子。0：无，1：有

int n;

void dfs(int r)//深度优先遍历
{
    if(r > n)//放满棋盘
    {
        res += 1;//答案个数 + 1
        if(res <= 3)//输出前三个答案
        {
            for(int i = 1; i <= n; i++)
            {
                cout << path[i] << " ";
            }
            cout << endl;
        }
    }
    for(int i = 1; i <= n; i++)//改行对应的每一列尝试放棋子
    {
        if(!col[i] && !dg[i + r] && !udg[n - i + r])//该点对应的列、左斜对角线、右斜对角线都没有棋子，则可以放。
        {
            path[r] = i;//放棋子
            col[i] = dg[i + r] = udg[n - i + r] = 1;//对应的列、左斜对角线、右斜对角线就棋子了
            dfs(r + 1);//进行下一行
            col[i] = dg[i + r] = udg[n -  i + r] = 0;//状态回滚
        }
    }
}

int main()
{
    cin >> n;
    dfs(1);
    cout << res;
    return 0;
}

