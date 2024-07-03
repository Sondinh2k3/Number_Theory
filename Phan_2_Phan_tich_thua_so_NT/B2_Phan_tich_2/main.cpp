/*
    Hãy phân tích một số nguyên dương thành tích các thừa số nguyên tố (sử dụng sàng SNT biến đổi)

    Input: Dòng đầu tiên ghi số bộ test
            Mỗi bộ test viết trên một dòng: số nguyên dương n không quá 5 chữ số
    
    Output: Mỗi bộ test viết ra thứ tự bộ test, sau đó lần lượt là các số nguyên tố khác nhau có trong tích, với
    mỗi số viết thêm số lượng số đó

    Kiến thức: 
    - Có thể dùng cách thông thường là duyệt từ i tới căn bậc 2 của n, nếu n chia hết cho i thì in ra i, sau đó n/=i
    - Cách khác: Nhanh hơn trong trường hợp có nhiều testcase:
        + Đầu tiên ta sẽ tìm ước số nguyên tố nhỏ nhất của các số từ 1 đến n (Sử dụng lại bài ở phần 1)
        + Tiếp theo đó ta sẽ in ra như sau:
        In ra ước số nguyên tố nhỏ nhất của n là p[n] => Sau đó lấy n/=p[n] => Sau đó lại in ra ước số nguyên tố
        nhỏ nhất của số n vừa cập nhật => ... cứ lần lượt làm như vậy cho đến khi n = 1 thì thôi
*/
#include <iostream>
#include <math.h>
using namespace std;

int p[100001];
void SNT_min(){
    for(int i=0; i<100001; i++){
        p[i] = i;
    }
    for(int i=2; i<sqrt(100001); i++){
        for(int j=i*i; j<100001; j+=i){
            if(p[j] == j) p[j] = i;
        }
    }
}
int main(){
    SNT_min();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        while(n>1){
            cout<<p[n]<<" ";
            n/=p[n];
        }
        cout<<endl;
    }
    return 0;
}