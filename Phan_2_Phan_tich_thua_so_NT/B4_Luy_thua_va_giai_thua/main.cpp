/*
    Lũy thừa và giai thừa
    Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết
    cho P^x

    Input: - Dòng đầu tiên đưa vào số lượng bộ test T
            - Những dòng kế tiếp đưa vào các bộ test. Mối bộ test là cặp số N, P được viết cách nhau một vài 
            khoảng trống
            - T, N, P thõa mãn ràng buộc: 1 <= T <= 100, 1 <= N <= 10^5, 2 <= P <= 5000
    Output: Đưa ra kết quả mỗi test theo từng dòng

    Lý thuyết: Với bài này ta dùng công thức Legendre
*/
#include <iostream>
#include <math.h>
using namespace std;

int degree(int n, int p){
    int ans = 0;
    for(int i=p; i<=n; i*=p){
        ans += n/i;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p;
        cin>>n>>p;
        cout<<degree(n, p)<<endl;
    }
    return 0;
}