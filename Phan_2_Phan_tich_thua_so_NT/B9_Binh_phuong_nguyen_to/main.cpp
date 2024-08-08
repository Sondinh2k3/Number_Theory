/*
    Một số được coi là số đẹp khi nó đồng thời vừa chia hết cho một số nguyên tố và chia hết
    cho bình phương của số nguyên tố đó. Viết chương trình liệt kê các số đẹp như vậy trong 
    đoạn giữa 2 số nguyên dương cho trước

    Input: - Hai số nguyên dương a, b (1 <= a <= b <= 10^6)
    Output: - In ra các số đẹp trong đoạn từ a đến b
*/
#include <iostream>
#include <math.h>
using namespace std;

int sodep(int n){
    for(int i=2; i<= sqrt(n); i++){
        int cnt=0;
        while(n%i == 0){
            cnt++;
            n/=i;
        }
        if(cnt >=2 ) return 1;
    }
    return 0;
}

int main(){
    int a, b;
    cin>>a>>b;
    for(int i = a; i<=b; i++){
        if(sodep(i)) cout<<i<<" ";
    }
    return 0;
}