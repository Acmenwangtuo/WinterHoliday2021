//
// Created by 王拓 on 2021/2/5.
//
#include <iostream>
#include <cstring>
#include <cstdio>
#define ll long long
using namespace std;
int main(){
    string s;
    cin >> s;
    string temp;
    for(int i = 0;i < s.length();i++){
        if (s[i]!='-') temp+=s[i];
    }
    ll yan = s[s.length()-1] - '0';

    ll cur = 1,ans = 0;
    for(int i = 0;i < temp.length()-1;i++){
        int d = temp[i] - '0';
        ans += (d * cur) % 11;
        cur++;
    }
    ans %= 11;
    string res;
    for(int i = 0;i < temp.size()-1;i++){
        res += temp[i];
        if(i == 0 || i == 3 || i == 8) res += '-';
    }
    if(ans == yan){
        cout << "Right" << endl;
        return 0;
    }
    char haha = ans == 10 ?'X':'0'+ans;
    res += haha;
    if (res == s) {
        cout << "Right" << endl;
        return 0;
    }
    cout << res << endl;
    return 0;
}
