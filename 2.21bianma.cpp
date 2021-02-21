//
// Created by 王拓 on 2021/2/22.
//

#include <iostream>

using namespace std;

const int N = 1010;

int n , s[N];//利用前缀和快速求出合并若干个点的花费
int f[N][N];//f[l][len]表示合并的长度为len，且左端点为l的区间所需要的花费

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)   cin >> s[i] , s[i] += s[i - 1];

    for(int len = 1 ; len <= n ; len++)//枚举区间长度
        for(int l = 1 ; l + len - 1 <= n ; l++)//枚举左端点
        {
            int r = l + len - 1;//计算右端点
            if(len == 1) f[l][r] = 0;//如果区间长度为1不用合并
            else
            {
                f[l][r] = 0x3f3f3f3f;
                for(int k = l ; k < r ; k++)//枚举合并分界点
                    f[l][r] = min(f[l][r] , f[l][k] + f[k + 1][r] + s[r] - s[l - 1]);
            }
        }

    cout << f[1][n] << endl;
}

