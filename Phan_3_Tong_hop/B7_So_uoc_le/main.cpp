/*
    Kiểm tra xem một số có số lượng ước số của nó là lẻ

    Input:  - Dòng đầu tiên là số lượng testcase t ( 1 -> 100)
            - t dòng tiếp theo, mỗi dòng là một số nguyên dương n (1 -> 10^8)

    Output: - Mỗi testcase in ra trên một dòng. YES nếu n có số lượng ước lẻ, còn lại in NO.
*/
#include <iostream>
#include <math.h>
using namespace std;

bool ktra_uoc_le(long long n){
    if(sqrt(n)*sqrt(n) == n) return 1; //Do n chia hết cho i thì cũng chia hết cho n/i
    return 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        if(ktra_uoc_le(n)) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}