/*
    Cho số nguyên dương chẵn: N > 2. Hãy liệt kê các cặp SNT p, q có tổng đúng bằng N.
    Vd: N = 6, ta có 1 cặp SNT là 3 + 3 = 6

    Input:  Dòng đầu tiên đưa vào số lượng bộ test T
            Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số chẵn N
            T, N thõa mãn ràng buộc: 1<=T<=100; 4 <= N <= 10000

    Output: Đưa ra kết quả mỗi test theo từng dòng.


    Lý thuyết: Giả thuyết GoldBack: Một số nguyên dương chẵn > 2 đều có thể được biểu diễn 
    dưới dạng tổng của 2 số nguyên tố => Theo đề bài, số dương chẵn nhập vào luôn tách được ra tổng 2 số nguyên tố

    VD: số 10 = 3 + 7 = 5 + 5
*/
#include <iostream>
#include <math.h>
using namespace std;

int nt[10001];
void sangSNT(){
    for(int i=0; i<10001; i++) nt[i] = 1;
    nt[1] = nt[0] = 0;
    for(int i=2; i<sqrt(10001); i++){
        if(nt[i]){
            for(int j = i*i; j<10001; j+=i) nt[j] = 0;
        }
    }
}

int main(){
    sangSNT();
    int t;
    cin>>t;
    while(t--){
        int n;
        cout<<"Nhap vao so chan N: ";
        cin>>n;
        for(int i=0; i<=n/2; i++){
            if(nt[i] && nt[n-i]) cout<<i<<" + "<<n-i<<endl;
        }
    }
    return 0;
}