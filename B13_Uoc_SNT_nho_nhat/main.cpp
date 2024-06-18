/*
    Cho số tự nhiên N. Nhiệm vụ của bạn là in ra ước SNT nhỏ nhất của các số từ 1 đến N.
    Ước SNT nhỏ nhất của 1 là 1, Uớc SNT nhỏ nhất của các số chẵn là 2. Ước SNT nhỏ nhất của các SNT là chính nó

    Input: Dòng đầu tiên đưa vào số lượng bộ test T
            Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N được ghi trên một dòng
            T, N thõa mãn ràng buộc: 1 <= T <= 1000; 1 <= N <= 100000

    Output: Đưa ra kết quả mỗi test theo từng dòng.
*/
#include <iostream>
#include <math.h>
using namespace std;

int nt[100001];
void sang_SNT_min(){
    for(int i=0; i<100001; i++){
        nt[i] = i;
    }
    for(int i=2; i<sqrt(100001); i++){
        if(nt[i] == i){
            for(int j=i*i; j<100001; j+=i){
                if(nt[j] == j) nt[j] = i;
            }
        }
    }
}

int main(){
    sang_SNT_min();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1; i<=n; i++){
            cout<<nt[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}