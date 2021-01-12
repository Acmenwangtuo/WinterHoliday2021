//
// Created by 王拓 on 2021/1/11.
//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main(){
//    int n,m;
//    cin >> n >> m;
//    vector<vector<int>>matrix (n,vector<int>(m,0));
//    int tot = 0;
//    int i=0,j=0;
//    int ceng = 0;
//    while (tot < n  * m){
//        if(tot == n *m -1){
//            matrix[i][j] = ++tot;
//        }
//        while(tot < n  * m && j < m - ceng-1){
//            matrix[i][j] = ++tot;
//            j++;
//        }
//        while(tot < n  * m && i < n - ceng-1){
//            matrix[i][j] = ++tot;
//            i++;
//        }
//        while(tot < n  * m &&j >= ceng+1){
//            matrix[i][j] = tot+1;
//            tot++;
//            j--;
//        }
//        while(tot < n  * m && i >= ceng+1){
//            matrix[i][j] = tot+1;
//            tot++;
//            i--;
//        }
//        ceng++;
//        i = j = ceng;
//        if(tot == n * m) break;
//    }
//    for(int p = 0;p < n; p++){
//        for(int q =0;q < m;q++){
//            cout << matrix[p][q] << " ";
//        }
//        cout << endl;
//    }
//    return 0;
//}
