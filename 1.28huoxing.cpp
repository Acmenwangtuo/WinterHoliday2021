//
// Created by 王拓 on 2021/1/28.
//leetcode 31
#include <iostream>
#include <vector>
using namespace std;
void nextPerm(vector<int>& arr){
    int n = arr.size();
    int first = -1, second = -1;
    for(int i = n-2;i >= 0;i--){
        if(arr[i] < arr[i+1]){
            first = i;
            break;
        }
    }
    if(first == -1){
        reverse(arr.begin(),arr.end());
        return;
    }
    for(int j = n-1;j > first;j--){
        if(arr[j] > arr[first]){
            second = j;
            break;
        }
    }
    swap(arr[first],arr[second]);
    reverse(arr.begin()+first+1,arr.end());
    return ;
}
int main(){
    int n ,k;
    cin >> n >> k;
    vector<int>arr (n);
    for(int i = 0;i < n;i++) cin >> arr[i];
    while (k--) {
        nextPerm(arr);
    }
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
    return 0;
}
