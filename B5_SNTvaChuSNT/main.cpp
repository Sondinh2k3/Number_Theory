/*
    Viết chương trình đếm xem trong đoạn [a, b] có bao nhiêu số là số nguyên tố và tất cả các
    chữ số của nó cũng là số nguyên tố

    Input:
    Dòng đầu ghi số bộ test
    Mỗi bộ test ghi 2 số a, b (1<a<b<10^6)

    Với mỗi test, ghi ra số lượng số thõa mãn trên một dòng
*/
#include <iostream>
#include <math.h>
using namespace std;
int nt[1000001];
int sangSNT(){
    for(int i=0; i<1000001; i++){
        nt[i] = 1;
    }
    nt[0] = nt[1] = 0;
    for(int i=2; i<sqrt(1000001); i++){
        if(nt[i]){
            for(int j=i*i; j<=1000001; j+=i) nt[j] = 0;
        }
    }
}

int chuSNT(int n){
    while(n>=1){
        if(nt[n%10] == 0) return 0;
        n/=10;
    }
    return 1;
}

int main(){
    sangSNT();
    int t;
    cin>>t;
    while(t--){
        int cnt = 0;
        int a, b;
        cin>>a>>b;
        for(int i=a; i<=b; i++){
            if(nt[i] && chuSNT(i)) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}