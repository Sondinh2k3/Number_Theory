/*
    Số Smith
    - Cho STN N, nhiệm vụ của bạn là kiểm tra xem N có phải là số Smith hay không.
    - Một số N được gọi là số Smith nếu N không phải là số nguyên tố và có tổng các chữ số của N bằng tổng
    các chữ số của ước số nguyên tố N
    - Vd: N = 666 có các ước số nguyên tố là 2, 3, 3, 37 có tổng các chữ số là 18

    Input: - Dòng đầu tiên đưa vào số lượng bộ test T
            - Những dòng kế tiếp đưa vào các bộ test, mỗi bộ test là một số nguyên N.
            - T, N thõa mãn ràng buộc: 1 <= T <= 100; 1 <= N <= 100000
    Output: Đưa ra kết quả mỗi test theo từng dòng "YES" or "NO"
*/
#include <iostream>
#include <math.h>
using namespace std;

int pt[100001];
void UocSNT_min(){
    for(int i=0; i<100001; i++) pt[i] = i;
    for(int i=2; i<sqrt(100001); i++){
        if(pt[i] == i){
            for(int j=i*i; j<100001; j+=i){
                if(pt[j] == j) pt[j] = i;
            }
        }
    }
}

int sumOfChuSo(int n){
    int tong = 0;
    while(n!=0){
        tong+=(n%10);
        n/=10;
    }
    return tong;
}

int sumOfChuSNT(int n){
    UocSNT_min();
    int tong = 0;
    while(pt[n] != n){
        tong += sumOfChuSo(pt[n]);
        n/=pt[n];
    }
    tong += sumOfChuSo(n);
    return tong;
}

int isNotSNT(int n){
    UocSNT_min();
    if(n != pt[n]) return 1;
    return 0;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(isNotSNT(n) == 1 && sumOfChuSo(n) == sumOfChuSNT(n)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}