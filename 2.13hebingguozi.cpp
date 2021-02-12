//
// Created by 王拓 on 2021/2/13.
//
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i = 0;i < n;i++){ cin >> arr[i]; pq.push(arr[i]);}
    int res = 0;
    while (pq.size()!=1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        pq.push(a+b);
        res += (a+b);
    }
    cout << res << endl;
    //for(int i = 0;i <)
}