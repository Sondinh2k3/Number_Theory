/*
    Đếm số lượng ước của một số nguyên dương

    Input:  - Dòng đầu tiên là số lượng testcase t (1 -> 100)
            - t dòng tiếp theo mỗi dòng là một số nguyên dương n (1 -> 10^9)
        
    Output: - Mỗi testcase in ra trên một dòng
*/
#include <iostream>
#include <math.h>
using namespace std;

void dem_uoc(int n){
    int cnt = 1;
    for(int i=2; i<=n; i++){
        if(n%i == 0) cnt++;
    }
    cout<<cnt<<" ";
}

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        dem_uoc(n);
    }
    return 0;
}