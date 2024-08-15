/*
    Tính tổng chữ số của một số nguyên dương n

    Input:  - Dòng đầu tiên là số lượng testcase t (1 -> 100)
            - t dòng tiếp theo, mỗi dòng là một số nguyên dương n (1 -> 10^18)
    
    Output: Mỗi testcase in ra trên một dòng tổng các chữ số của n

*/
#include <iostream>
#include <math.h>
using namespace std;

int tong_chuso(long long n){
    int sum = 0;
    while(n!=0){
        sum+= n%10;
        n/=10;
    }
    return sum;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n; cin>>n;
        cout<<tong_chuso(n)<<endl;
    }
    return 0;
}