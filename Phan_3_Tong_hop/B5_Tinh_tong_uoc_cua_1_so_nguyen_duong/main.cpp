/*
    Tính tỏng ước của một số nguyên dương n

    Input:  - Dòng đầu tiên là số lượng testcase t (1 -> 100)
            - t dòng tiếp theo, mỗi dòng là một số nguyên dương n (1 -> 10^9)

    Output: - Mỗi testcase in ra trên một dòng
*/
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long sum = 0;
        for(int i = 1; i<=n; i++){
            if(n%i==0) sum+=i;
        }
        cout<<sum<<endl;
    }
    return 0;
}