/*
    Đếm số lượng chữ số 0 của n!
    Input: Dòng đầu tiên là số lượng testcase T (1 <= n <= 100)
            T dòng tiếp theo, mỗi dòng là một số nguyên dương n (1 <= n <= 10^6)

    Output: In ra số lượng chữ số 0 liên tiếp tính từ cuối của n!

    Lý thuyết: Để đếm số lượng chữ số 0 của n!, ta sẽ đếm số lượng tích của 2x5 trong n!
    => Ta có thể phân tích ra thừa số nguyên tố dưới dạng: 2^x * 5^y, với số lượng chữ số 0 sẽ là min (x,y)
    Hay nói cách khác, ta phải tính được bậc của 2 và bậc của 5 trong n!. Lúc này ta nên nhớ lại thuật toán Legendree
*/
#include <iostream>
#include <math.h>
using namespace std;

int degree(int n, int p){
    int ans = 0;
    for(int i = p; i<=n; i*=p){
        ans += n/i;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k = degree(n, 2);
        int h = degree(n, 5);
        if(h<k) cout<<h<<endl;
        else cout<<k<<endl;
    }
    return 0;
}