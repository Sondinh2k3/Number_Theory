/*
    Cho số tự nhiên N, nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng 3 ước số. 
    VD: N=100 => ta có các số: 4, 9, 25, 49

    Input: Dòng đầu tiên đưa vào số lượng test T
            Những dòng kết tiếp đưa vào các bộ test. Mỗi bộ test là một số N
            T, N thõa mãn ràng buộc: 1 <= T <= 100 và 1 <= N <= 10^6

    Output: Đưa ra kết quả mỗi test theo từng dòng

    Lý thuyết: Một số n có ước số là i thì sẽ có một ước khác là n/i => Luôn tồn tại các cặp ước số: (i; n/i)
    => Số ước số thường là chẵn, vậy để có số ước số lẻ thì phải tồn tại 1 cặp: i = n/i tức i^2 = n.
    Vậy lúc này n sẽ là bình phương của một số.

    Tiếp theo: Ta cần các số có đúng 3 ước số, tức là: 1, i = n/i và chính nó => i chỉ có 2 ước số là 1 và chính nó
    => i là một số nguyên tố => n sẽ là bình phương của một số nguyên tố :))

    vậy để liệt kê các số n có đúng 3 ước số, ta chỉ cần liệt kê ra các SNT trong khoảng từ 1 đến sqrt(n) và bình phương nó lên
*/
#include <iostream>
#include <math.h>
using namespace std;

int nt[1000001];
void sangSNT(){
    for(int i = 0; i<1000001; i++) nt[i] = 1;
    nt[0] = nt[1] = 0;
    for(int i = 2; i<sqrt(1000001); i++){
        if(nt[i]){
            for(int j = i*i; j<1000001; j+=i) nt[j] = 0;
        }
    }
}

int main(){
    sangSNT();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 0; i<=sqrt(n); i++){
            if(nt[i]) cout<<i*i<<" ";
        }
        cout<<endl;
    }
    return 0;
}