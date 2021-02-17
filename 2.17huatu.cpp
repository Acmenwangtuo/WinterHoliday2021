////
//// Created by 王拓 on 2021/2/17.
////
//#include <iostream>
//int grid[100+5][100+5];
//using namespace std;
//int main(){
//    int n;
//    for(int i =1;i <= 100;i++){
//        for(int j = 1;j <= 100;j++){
//           grid[i][j] = 0;
//        }
//    }
//    cin >> n;
//    for(int i = 0;i < n;i++){
//        int a,b,c,d;
//        cin >> a >> b >> c >> d;
//        for(int i = a;i <c;i++){
//            for(int j = b;j <d;j++)
//                grid[i][j] = 1;
//        }
//    }
//    int res = 0;
//    for(int i =0;i <= 100;i++){
//        for(int j = 0;j <= 100;j++){
//            if(grid[i][j] == 1) res++;
//        }
//    }
//    cout << res << endl;
//    return 0;
//}
//
