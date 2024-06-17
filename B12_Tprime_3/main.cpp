/*
    Cho 2 số L, R. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng 3 ước số trong khoảng [L, R].
    Ví dụ: L=1, R=10, ta có kết quả là 2 vì chỉ có số 3 và 9 là có đúng 3 ước số.

    Input: Dòng đầu tiên đưa vào số lượng test T
            Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một cặp số L, R.
            T, N thõa mãn ràng buộc: 1 <= T <= 100; 1 <= L, R <= 10^12

    Output: Đưa ra kết quả mỗi test theo từng dòng.
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
            for(int j = i*i; j<1000001; j+=i) nt[j] = 0;
        }
    }
}
using ll =  long long;
int main(){
    sangSNT();
    int t;
    cin>>t;
    while(t--){
        ll L, R;
        int cnt = 0;
        cin>>L>>R;
        int k = sqrt(L);
        if(k*k != L) k++;
        for(int i = k; i<=sqrt(R); i++){
            if(nt[i]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}