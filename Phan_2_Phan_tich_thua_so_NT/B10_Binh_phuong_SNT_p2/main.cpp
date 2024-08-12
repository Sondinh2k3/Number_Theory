/*
    Một số được coi là số đẹp khi nếu nó chia hết cho một SNT nào đó thì cũng chia hết cho bình phương của SNT đó. Viết chương 
    trình liệt kê các số đẹp như vậy trong đoạn giữa 2 số nguyên dương cho trước.

    Input: - 2 số nguyên dương a, b từ (1 -> 10^6)

    Output: In ra các số đẹp trong đoạn từ a đến b
*/
#include <iostream>
#include <math.h>
using namespace std;

int sodep2(int n){
    if(n==1) return 0;
    for(int i=2; i<=sqrt(n); i++){
        int cnt = 0;
        while(n%i == 0){
            cnt++;
            n/=i;
        }
        if(cnt == 1) return 0;
    }
    if(n!=1) return 0;
    return 1;
}

int main(){
    int a, b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if(sodep2(i)) cout<<i<<" ";
    }
    return 0;
}