//
// Created by 王拓 on 2021/1/24.
//
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, b = 1;
    cin >> n;
    for (int i = 1; i <= n; i ++)
    {
        b *= i;// 递推求阶乘
        while (!(b % 10)) // 删掉后面的 0
            b /= 10;
        b %= 1000000;// 取余
    }
    cout << b % 10;
}

