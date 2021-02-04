//
// Created by 王拓 on 2021/2/4.
//
#include <iostream>
#define ll long long
using namespace std;
ll binpow(int a,int b,int m){
    a %= m;
    ll res = 1;
    while (b > 0){
        if(b & 1) res = res  *  a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;

}
int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    cout << binpow(a,b,c) << endl;
    return 0;
}
