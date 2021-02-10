////
//// Created by 王拓 on 2021/2/11.
////
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//int m,n,k;
//int gcd(int a, int b)
//{
//    if (a < b) swap(a, b);
//    return b == 0 ? a : gcd(b, a % b);
//}
//pair<int,int> check(int a){
//    double l = 1, r =k + 1;
//    while(r>l){
//        int mid = l + (r-l) / 2;
//        if(double (a) / double (mid) > double(m)/double (n)){
//            l = mid+1;
//        }
//        else{
//            r = mid;
//        }
//    }
//    return make_pair(l,l-1);
//}
//int main(){
//    cin >> m >> n;
//    cin >> k;
//    double r = double(m) / double (n);
//    int res_a=m,res_b=n;
//    double cur = 1000000;
//    for(int i = 1 ;i <= k;i++){
//        auto [a,b] = check(i);
////        if(i == 1){
////            cout << a << b << endl;
////            cout << "nmsl" << endl;
////        }
//        if(a > k && b>k){
//            res_a = i;
//            res_b = k;
//        }
//        if(abs((double (i) / double (a)) -r)  <  cur &&  a <= k &&(double (i) / double (a)) -r >= 0 && a >= 1){
//            res_a = i;
//            res_b = a;
//            cur = abs(double (i) / double (a)-r) ;
//        }
//        if(abs((double (i) / double (b)) -r)  <  cur &&  b <= k && (double (i) / double (b)) -r>=0 && b >= 1){
//            res_a = i;
//            res_b = b;
//            cur = abs(double (i) / double (b) -r) ;
//        }
//    }
////      cout << check(5) << "hahah" << endl;
////    cout << res_a << " " << res_b;
//    if(gcd(res_a,res_b) == 1)
//        cout << res_a << " " << res_b;
//    else{
//        int g = gcd(res_a,res_b);
//        cout << res_a/g << " " << res_b / g;
//    }
//}