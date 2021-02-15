//
// Created by 王拓 on 2021/2/15.
//
/* CCF201312-4 有趣的数 */

#include <iostream>
#include <cstring>

using namespace std;

const long long MOD = 1000000007;
const int MAXN = 1000;
const int MAXS = 5;
long long status[MAXN+1][MAXS+1];


int main()
{
    int n;

    cin >> n;

    memset(status, 0, sizeof(status));

    // DP
    status[1][0] = 1;
    for(int i=2; i<=n; i++) {
        status[i][0] = 1;
        status[i][1] = (status[i - 1][1] * 2 + status[i - 1] [0]) % MOD;
        status[i][2] = (status[i - 1][2] + status[i - 1][0]) % MOD;
        status[i][3] = (status[i - 1][3] * 2 + status[i - 1][1] ) % MOD;
        status[i][4] = (status[i - 1][4] * 2 + status[i - 1][1] + status[i - 1][2]) % MOD;
        status[i][5] = (status[i - 1][5] * 2 + status[i - 1][3] + status[i - 1][4]) % MOD;
    }

    cout << status[n][5] << endl;

    return 0;
}