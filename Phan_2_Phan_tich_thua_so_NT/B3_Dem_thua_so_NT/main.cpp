/*
    Hãy đếm số lượng thừa số nguyên tố khác nhau trong phân tích thừa số nguyên tố của một số nguyên dương n
    
    Input: Dòng đầu tiên là số lượng test case T (từ 1 đến 100)
            T dòng tiếp theo, mỗi dòng là một số nguyên dương n (từ 1 đến 10^9)

    Output: Số lượng thừa số nguyên tố khác nhau của n
*/
#include <iostream>
#include <math.h>
using namespace std;

void pt(int n){
    int cnt = 0;
    int k = sqrt(n);
    for(int i=2; i<=k; i++){
        if(n%i == 0){
            cnt++;
            while(n%i==0){
                n/=i;
            }
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        pt(n);
    }
    return 0;
}