//
// Created by 王拓 on 2021/2/7.
//
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main(){
    vector<int>a(10);
    for(int i = 0;i < 10;i++) cin >> a[i];
    int init ;
    scanf("%d",&init);
    int cnt = 0;
    for(int i = 0;i < 10;i++){
        if(init + 30 >= a[i]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
