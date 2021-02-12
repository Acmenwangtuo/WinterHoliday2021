////
//// Created by 王拓 on 2021/2/13.
////
//#include <iostream>
//using namespace std;
//#include <cmath>
//int gcd(int a, int b)
//{
//    if (a < b) swap(a, b);
//    return b == 0 ? a : gcd(b, a % b);
//}
//int main(){
//    int n;
//    cin >> n;
//    int res = 1;
//    for(int i = 2;i < sqrt(n);i++) {
//        if (n % i == 0) {
//            if (gcd(i, n / i) == 1) {
//                res = n / i;
//                break;
//            }
//        }
//    }
//    cout << res << endl;
//}