/*
    Viết chương trình liệt kê N số nguyên tố đầu tiên, với N là một số nguyên dương không quá 10^5

    Input: Dữ liệu vào chỉ có duy nhất một số N
    
    Output: Kết quả ghi mỗi số nguyên tố trên một dòng, theo thứ tự từ nhỏ đến lớn

    
*/
#include <iostream>
#include <math.h>
using namespace std;
int nt[10000001]; //Công thức tính toán trong khoảng n có bao nhiêu số nguyên tố: n/ln(n)
void sangSNT(){
    for(int i=0; i<10000001; i++){
        nt[i] = 1;
    }
    nt[0] = nt[1] = 0;
    for(int i=2; i<sqrt(10000001); i++){
        if(nt[i]){
            for(int j=i*i; j<10000001; j+=i){
                nt[j] = 0;
            }
        }
    }
}

int main(){
    sangSNT();
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        if(nt[i]) cout<<i<<endl;
    }
    return 0;
}