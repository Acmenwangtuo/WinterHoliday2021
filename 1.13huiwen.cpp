//
// Created by 王拓 on 2021/1/13.
//
#include <iostream>
#include <vector>
#include <string>
using namespace std;
string int2N(int n,int base){
    string res = "";
    while(n){
        int temp = n % base;
        char cur;
        if (temp >= 10){
            cur = ('A'+temp-10);
            res = cur + res;
        }
        else res = to_string(temp) + res;
        n = n / base;
    }
    return res;
}
bool huiwen(string s){
    int i = 0,j = s.size()-1;
    while(i < j){
        if(s[i] != s[j]) return false;
        else{
            i++;
            j--;
        }
    }
    return true;
}
int main(){
    int base;
    cin >> base;
    for(int i = 1;i <= 300;i++){
        int cur = i * i;
        string haha = int2N(cur,base);
        if(huiwen(haha)){
            cout << int2N(i,base) <<  " " << int2N(cur,base) << endl;
        }
    }
    return 0;
}

