/*
    Kiểm tra số chính phương: Số chính phương là một số tự nhiên có căn bậc 2 cũng là STN

    Input:  - Dòng đầu tiên là số lượng testcase t (1 -> 100)
            - t dòng tiếp theo, mỗi dòng là một số nguyên dương n (1 -> 10^18)

    Output: - Mỗi testcase in ra trên một dòng. YES nếu là số chính phương và NO trong trường hợp ngược lại


*/
#include <iostream>
#include <math.h>
using namespace std;

int ktraCP(long long n){
    if(sqrt(n)*sqrt(n) == n) return 1;
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(ktraCP(n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}