/*
    In ra các số chính phương trong đoạn từ a đến b

    Input:  - Dòng đầu tiên là số lượng testcase t (1 -> 100)
            - t dòng tiếp theo mỗi dòng là 2 số nguyên dương a, b (1 -> 10^6)

    Output: - Mỗi testcase in ra trên một dòng
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int k=sqrt(a);
        if(k*k != a) k++;
        for(int i=k; i<=sqrt(b); i++){
            cout<<i*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}