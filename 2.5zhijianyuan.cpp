//
// Created by 王拓 on 2021/2/5.
//
#include <iostream>
#include <vector>
const int N = 200010;
using namespace std;
#define ll long long

int w[N], v[N];
int l[N], r[N];
int cnt[N];
ll sum[N];
int n,m;
ll S;
ll get(int W)
{
    for (int i = 1; i <= n; i ++ )
        if (w[i] >= W)
        {
            sum[i] = sum[i - 1] + v[i];
            cnt[i] = cnt[i - 1] + 1;
        }
        else
        {
            sum[i] = sum[i - 1];
            cnt[i] = cnt[i - 1];
        }

    ll res = 0;
    for (int i = 0; i < m; i ++ ) res += (cnt[r[i]] - cnt[l[i] - 1]) * (sum[r[i]] - sum[l[i] - 1]);
    return res;
}
int main(){
    cin >> n >> m >> S;
    for(int i = 1;i <= n;i++) cin  >> w[i] >> v[i];
    for(int i = 0;i < m;i++) cin >> l[i] >> r[i];
    int l=0,r = 10000001;
    while(l < r){
        int mid = l + (r-l)/2;
        if(get(mid) >= S) l = mid + 1;
        else
            r = mid;
    }
    cout << min(abs(get(l)-S),abs(get(l-1)-S)) << endl;
}