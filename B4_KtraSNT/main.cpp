/*
    Input: Dòng đầu tiên là số lượng testcase
    Mỗi testcase là một số nguyên n (0 => 10^6)

    Output:
    In ra kết quả mỗi testcase trên một dòng. In YES nếu là số nguyên tố, ngược lại in NO
*/
#include <iostream>
#include <math.h>
using namespace std;

int a[1000001];
void sangSNT(){
    for(int i=0; i<1000001; i++) a[i] = 1;
    a[0] = a[1] = 0;

    for(int i=2; i<sqrt(1000001); i++){
        if(a[i]){
            for(int j=i*i; j<1000001; j+=i){
                a[j] = 0;
            }
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
        if(a[n] == 1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}