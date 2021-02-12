//
// Created by 王拓 on 2021/2/12.
//
#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <unordered_map>
using namespace std;
const int maxn = 1000+5;
int dp[maxn];
//template <typename T>
//class cmp
//{
//public:
//    //重载 () 运算符
//    bool operator()(T a, T b)
//    {
//        return dp[a] > dp[b];
//    }
//};
int main() {
    memset(dp, 0, sizeof(dp));
    int n, m;
    int res = 0;
    cin >> n >> m;
    vector<int> arr(m);
    unordered_map<int, int> mp;
    deque<int> dq;
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        if (mp.count(arr[i])) continue;
        else {
            if (dq.size() < n) {
                dq.push_back(arr[i]);
                mp[arr[i]]++;
            }
            else {
                int temp = dq.front();
                dq.pop_front();
                mp[temp]--;
                if (mp[temp] == 0) mp.erase(temp);
                dq.push_back(arr[i]);
                mp[arr[i]]++;
            }
            res++;
        }
    }
    cout << res << endl;

}