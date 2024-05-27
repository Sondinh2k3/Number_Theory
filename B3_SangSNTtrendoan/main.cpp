/*
    Sàng số nguyên tố trên đoạn
    Input: 2 số nguyên không âm a, b (0 <= a <= b <= 10^9, b-a <= 10^5)

    Output: In ra các số nguyên tố trong đoạn từ a đến b, chú ý lấy cả 2 cận
*/
#include <iostream>
#include <math.h>
using namespace std;

void sangNT(int a, int b){
    int nt[b-a+1];
    for(int i=0; i<=b-a; i++){
        nt[i] = 1;
    }
    for(int i=2; i<=sqrt(b); i++){
        for(int j = max(i*i, (a+i-1)/i *i); j<=b; j+=i)
        nt[j-a] = 0;
    }

    for(int i=max(2,a); i<=b; i++){
        if(nt[i-a]) cout<<i<<" ";
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    sangNT(a,b);
    return 0;
}