/*
    Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng 3 ước số. Ví dụ: 
    n=100 ta có 4 số.

    Input: Dòng đầu tiên đưa vào số lượng test T.
            Những dòng kết tiếp đưa vào các bộ test. Mỗi bộ test là một số N.
            T, N thõa mãn ràng buộc: 1 <= T <= 100; 1 <= N <= 10^12

    Output: Đưa ra kết quả mỗi test theo từng dòng

*/
#include <iostream>
#include <math.h>
using namespace std;

int nt[1000001];
void sangSNT(){
    for(int i=0; i<1000001; i++) nt[i] = 1;
    nt[0] = nt[1] = 0;
    for(int i=2; i<sqrt(1000001); i++){
        if(nt[i]){
            for(int j=i*i; j<1000001; j+=i) nt[j] = 0;
        }
    }
}

int main(){
    sangSNT();
    int t;
    cin>>t;
    while(t--){
        int n, cnt = 0;
        cin>>n;
        for(int i=0; i<=sqrt(n); i++){
            if(nt[i]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}