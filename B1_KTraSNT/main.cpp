/*
    Kiểm tra số nguyên tố
    Input: số nguyên n (0 -> 10^9)

    Output: In YES nếu là số nguyên tố, ngược lại in NO
*/
#include <iostream>
using namespace std;

int ktraSNT(int n){
    int cnt = 0;
    for(int i = 2; i<n; i++){
        if(n%i == 0) cnt++;
    }
    if (cnt == 0 ) return 1;
    else return 0;
}
int main(){
    int n;
    cin>>n;
    if(ktraSNT(n)) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}