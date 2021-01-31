//
// Created by 王拓 on 2021/1/31.
//
#include<iostream>
using namespace std;
const int maxn = 100010;
#define ll long long
ll n, k,t, q[maxn],cnt[maxn],qian=0;
int main() {
    scanf("%lld%lld", &n, &k);
    for (int i = 1; i <= n; i++) {           //从1开始，方便后边处理
        scanf("%lld", &t);
        qian = (qian + t);                  //求输入数组前缀
        q[qian%k]++;                        //求前缀和的取余，并用桶排序、统计个数
    }
    ll flag = 0;
    for (int i = 0; i < k; i++) {
        if(q[i])
            flag += (q[i] * (q[i] - 1) / 2);    //n个数，从里边取两个，共有n*(n-1)/2种方法
    }

    cout << flag +q[0]<< "\n";              // 为什么要加q[0]?
    // 因为我们前边漏掉了前i个数的和对k取模为0的情况
    //也就是漏掉了例题中123和1234的这两个情况。
    return 0;
}

