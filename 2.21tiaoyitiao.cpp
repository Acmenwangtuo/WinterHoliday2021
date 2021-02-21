////
//// Created by 王拓 on 2021/2/21.
////
//#include <iostream>
//#include <vector>
//const int maxn = 30+5;
//int arr[maxn];
//using namespace std;
//int main(){
//    int a;
//    int idx = 0;
//    while(cin >> a){
//        if(a == 0){
//            break;
//        }
//        arr[idx++] = a;
//    }
//    int res = 0;
//    int temp = 2;
//    for(int i = 0;i < idx;i++){
//        if(i==0 || arr[i]== 1 || arr[i] == 2 && arr[i-1] == 1) {res += arr[i];temp=2;}
//        else if (arr[i-1] == 2 && arr[i]== 2){ temp += 2; res+=temp;}
//    }
//    cout << res << endl;
//    return res;
//}