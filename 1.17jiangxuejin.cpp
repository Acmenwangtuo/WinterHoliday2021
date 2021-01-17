//
// Created by 王拓 on 2021/1/17.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct student{
    int no;
    int chi;
    int math;
    int eng;
    int tot;
};
int main(){
    int n;
    cin >> n;
    vector<student> stu(n);
    for(int i = 0;i < n;i++){
        stu[i].no = i+1;
        cin >> stu[i].chi >> stu[i].math >> stu[i].eng;
        stu[i].tot =  stu[i].chi + stu[i].math + stu[i].eng;
    }
    sort(stu.begin(),stu.end(),[&](student s1,student s2)->bool {
        if(s1.tot == s2.tot){
            if(s1.chi == s2.chi) return s1.no < s2.no;
            return s1.chi > s2.chi;
        }
        return s1.tot > s2.tot;
    });
    int k = 0;
    for(auto s : stu){
        cout << s.no << " " << s.tot << endl;
        k++;
        if (k==5) break;
    }

}
