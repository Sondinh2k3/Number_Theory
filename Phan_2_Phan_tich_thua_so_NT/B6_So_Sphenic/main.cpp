/*
        Số Sphenic:
    - Số nguyên dương N được gọi là số Sphenic nếu N được phân tích duy nhất dưới dạng tích của 3 số khác nhau.
    Vd: N = 30 là số Sphenic vì 30 = 2x3x5; N = 60 không phải số Sphenic vì 60 = 2x2x3x5
    - Cho số tự nhiên N, nhiệm vụ của bạn là kiểm tra xem N có phải là số Sphenic hay không?
    - Các số Sphenic đầu tiên: 30, 42, 66, 70, 78, 102

    Input: - Dòng đầu tiên đưa vào số lượng bộ test T
            - Những dòng kế tiếp đưa vào các bộ test, mỗi bộ test là một số nguyên dương N
            - T, N thõa mãn các ràng buộc: 1 <= T <= 100; 1 <= N <= 10000
    Output: - Đưa ra 1 hoặc 0 tương ứng với N là số Sphenic hoặc không của mỗi test theo từng dòng.
*/
#include <iostream>
#include <math.h>
using namespace std;

int pt[10001];
void UocSNT_min(){
    for(int i=0; i<10000; i++) pt[i] = i;
    for(int i=2; i<sqrt(10001); i++){
        if(pt[i] == i){
            for(int j=i*i; j<10001; j+=i){
                if(pt[j] == j) pt[j] = i;
            }
        }
    }
}

int isSphenic(int n){
    UocSNT_min();
    int cnt=1;
    while(pt[n] != n){
        cnt++;
        n/=pt[n];
    }
    if (cnt == 3) return 1;
    else return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<isSphenic(n)<<endl;
    }
    return 0;
}