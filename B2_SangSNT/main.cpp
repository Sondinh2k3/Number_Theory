/*
    Sàng số nguyên tố
    Input: Nhập số nguyên n (0 => 10^6)

    Output:
    In ra trên một dòng các số nguyên tố không vượt quá n, mỗi số cách nhau một khoảng trắng
*/
#include <iostream>
#include <math.h>
using namespace std;

int a[1000001];
void sangSNT(){
    for(int i=0; i<1000001; i++) a[i] = 1;
    a[0] = a[1] = 0;
    for(int i=2; i<sqrt(1000001); i++){
            if(a[i]){
                for(int j = i*i; j<1000001; j+=i){
                a[j] = 0;
            }
        }
    }
}
int main(){
    sangSNT();
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        if(a[i]) cout<<i<<" ";
    }
    return 0;
}