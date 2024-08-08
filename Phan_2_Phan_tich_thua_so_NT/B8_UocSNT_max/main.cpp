/*
        Ước SNT lớn nhất của số nguyên dương
    Input: - Dòng đầu tiên là số lượng testcase T (1 -> 100)
            - T dòng tiếp theo mỗi dòng là một số nguyên dương (1 -> 10^6)
    Output: - Ước SNT lớn nhất của N in ra trên một dòng
*/
#include <iostream>
#include <math.h>
using namespace std;

int pt[1000001];
void UocSNT_max(){
    for(int i=0; i<1000001; i++) pt[i] = i;
    for(int i=2; i<sqrt(1000001); i++){
        for(int j=2*i; j<1000001; j+=i){
                pt[j] = i;
        }
    }
}

int main(){
    UocSNT_max();
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<pt[n]<<endl;
    }
    return 0;
}