//
// Created by 王拓 on 2021/2/14.
//
#include <iostream>
#include <cstdio>
using namespace std;
int n;
int maxH = -1;
int h[100005];
bool success(int x)
{
    int temp = x;
    for (int i = 1; i <= n; i++)
    {
        temp += temp - h[i];
        if (temp < 0) return false;
        if (temp >= maxH) return true;
    }
    return true;
}
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &h[i]);
        maxH = max(maxH, h[i]);
    }
    int l = 0, r = maxH;
    while (l < r)
    {
        int mid = l + r >> 1;
        if (success(mid))
        {
            r = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    printf("%d\n", l);
    return 0;
}
