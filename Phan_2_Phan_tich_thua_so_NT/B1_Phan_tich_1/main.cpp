/*
    Hãy phân tích một số nguyên dương n thành thừa số nguyên tố

    Input: Số nguyên dương n (1 <=n <= 10^9)
    Output: Cách phân tích thừa số nguyên tố của n
*/
#include <iostream>
#include <math.h>
using namespace std;

void phantichSNT(int n){
    for(int i=2; i<=sqrt(n); i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n!=1) cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    phantichSNT(n);
    return 0;
}