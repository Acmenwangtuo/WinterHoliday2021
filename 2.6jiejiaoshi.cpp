//
// Created by 王拓 on 2021/2/6.
//
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
const int N = 1000010;

int n,m;
int r[N] ,d[N] ,s[N] ,t[N];
ll b[N];
bool check(int k){
    for(int i = 1;i <= n;i++) b[i] = r[i];
    for(int i = 1;i <= k;i++){
        b[s[i]] -= d[i];
        b[t[i] + 1]  += d[i];
    }
    ll res = 0;
    for(int i = 1;i <= n;i++){
        res += b[i];
        if(res < 0) return true;
    }
    return false;
}
int main(){
    cin >> n >> m;
    for(int i = 1;i <=n ;i++) cin >> r[i];
    for(int i =n;i;i--) r[i] -= r[i-1];
    for(int i = 1;i <= m;i++) cin >> d[i] >> s[i] >> t[i];
    int l = 1,r = m;
    while(l < r){
        int mid = l + (r-l)/2;
        if(check(mid)) r = mid;
        else l = mid + 1;
    }
    if(check(r)){
        cout << "-1" << endl;
        cout << r << endl;
    }
    else
        cout << "0"  << endl;
    return 0;
}
