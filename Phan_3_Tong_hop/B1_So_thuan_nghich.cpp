/*
    Kiểm tra số thuận nghịch: Số thuận nghịch là số mà khi ta đọc từ trái qua phải hay đọc từ phải qua trái đều như nhau

    Input: - Dòng đầu tiên là số lượng testcase T (1 -> 100)
            - T dòng tiếp theo mỗi dòng là một số nguyên dương n (1<= n <= 10^18)

    Output: - Mỗi testcase in ra trên một dòng, in YES nếu n là số thuận nghịch, và NO trong trường hợp ngược lại

    Cách đảo ngược một số: sau mỗi vòng lặp ta cứ lấy số ở sau nhân 10 cộng số ở trước
*/
#include <iostream>
#include <math.h>
using namespace std;

int tn(long long n){
    long long rev = 0; long long m = n;
    while(n!=0){
        rev = rev*10 + n%10;
        n/=10;
    }
    if(rev != m) return 0;
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(tn(n)) cout<<"YES \n";
        else cout<<"NO\n";
    }
    return 0;
}