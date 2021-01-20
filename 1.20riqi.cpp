//
// Created by 王拓 on 2021/1/20.
//
#include <iostream>
#include <vector>
using namespace std;
int week_day(int year, int month, int day)
{
    if (month == 1 || month == 2) month += 12, year--;
    return (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400 + 1) % 7;
}
int main(){
    int len = 0;
    cin >> len;
    vector<int> cnt(7,0);
    for(int i = 1900;i < 1900+len;i++){
        for(int j = 1;j <= 12;j++) cnt[week_day(i,j,13)]++;
    }
    cout << cnt[6] << " "<<cnt[0]<< " "<<cnt[1]<< " "<<cnt[2]<< " "<<cnt[3]<< " "<<cnt[4]<< " "<<cnt[5];
    return 0;
}
