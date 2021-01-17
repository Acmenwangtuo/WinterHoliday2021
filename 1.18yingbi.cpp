//
// Created by 王拓 on 2021/1/18.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    string cur, target;
    cin >> cur >> target;
    int pre = -1,last = -1;
    int res = 0;
    for(int i = 0;i < cur.size();i++){
        if(cur[i]!=target[i]){
            if(pre == -1) pre = i;
            else{
                last = i;
                res += (last-pre);
                pre = -1;
                last = -1;
            }
        }
    }
    cout <<  res << endl;
}