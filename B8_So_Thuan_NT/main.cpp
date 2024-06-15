/*
    Một số được coi là thuần nguyên tố nếu nó là SNT, tất cả các chữ số là SNT, và tổng các chữ số của
    nó cũng là một SNT. Bài toán đặt ra là đếm xem trong một đoạn giữa 2 số nguyên cho trước có bao nhiêu
    số thuần nguyên tố

    Input: Dòng đầu tiên ghi số bộ test. Mỗi bộ test viết trên một dòng 2 số nguyên dương tương ứng, cách nhau
    một khoảng trống. Các số đều không vượt quá 9 chữ số.

    Output: Mỗi bộ test viết ra số lượng các số thuần nguyên tố tương ứng
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

int ktrasnt(int n){ //Hàm này chỉ dùng để ktra các số lớn hơn 10^6
    int cnt = 0;
    for(int i=2; i<n; i++){
        if(n%i == 0) cnt++;
    }
    return !cnt;
}

bool ktraChuSNT(int n){
    int k;
    bool kt = true;
    while(n>0){
        k = n%10;
        n/=10;
        if(!nt[k]) kt = false;
    }
    return kt;
}

int tongCacChuSo(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n/=10;
    }
    return nt[sum];
}
int main(){
    sangSNT();
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int cnt = 0;
        if(b<1000001){
            for(int i = a; i<=b; i++){
                if(nt[i] && ktraChuSNT(i) && tongCacChuSo(i)) cnt++;
            }
            cout<<cnt<<endl;
        }
        else{
            for(int i = a; i<=b; i++){
                if(ktrasnt(i) && ktraChuSNT(i) && tongCacChuSo(i)) cnt++;
            }
            cout<<cnt<<endl;
        }
    }
    return 0;
}