//
// Created by 王拓 on 2021/1/26.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>arr (n,0);
    for(int i = 0;i < n ;i++) cin >> arr[i];
    sort(arr.begin(),arr.end());
    if(n % 2 == 0){
        int l = accumulate(arr.begin(), arr.begin()+ n / 2, 0);
        int r = accumulate(arr.begin()+n/2,arr.end(),0);
        cout << 0 << " " << r - l ;
    }
    else{
    int l = accumulate(arr.begin(),arr.begin() + n / 2,0);
    int r = accumulate(arr.begin()+n/2,arr.end(),0);
    cout << 1 << " " << r - l ;}
    return 0;

}