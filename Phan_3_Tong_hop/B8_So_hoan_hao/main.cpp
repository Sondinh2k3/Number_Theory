/*
    Số hoàn hảo là số có tổng các ước thực sự (Không tính chính nó) bằng chính số đó. Cho một
    số nguyên dương n, kiểm tra xem n có phải là một số hoàn hảo hay không.

    Input: - Dòng đầu tiên nhập số lượng testcase t (1 -> 100)
            - t dòng tiếp theo, mỗi dòng là một số nguyên dương (1 -> 10^18)
    Output: - Mỗi testcase in ra trên một dòng. YES nếu là số hoàn hảo, ngược lại in NO.

    Ta sẽ dựa vào kiến thức sau: Nếu p là số nguyên tố, 2^p - 1 cũng là số nguyên tố 
    => Khi đó ta có: 2^(p-1) * (2^p-1) là số hoàn hảo
*/
#include <iostream>
#include <math.h>
using namespace std;

using ll = long long;
bool nt(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return n>1;
}

ll hh[100];
int cnt = 0;

void init_hh(){
    for(int p = 2; p<=32; p++){
        if(nt(p)){
            ll tmp = 1ll* (int)(pow(2,p) - 1);
            if(nt(tmp)){
                hh[cnt] = 1ll* (int)(pow(2,p-1))*tmp;
                cnt++;
            }
        }
    }
}

int main(){
    init_hh();
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        bool ktra = false;
        for(int i = 0; i <=  cnt; i++){
            if(n == hh[i]) ktra = true;
        }
        if(ktra) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}