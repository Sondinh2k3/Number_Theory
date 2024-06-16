/*
    Viết chương trình nhập 2 số nguyên dương a, b thõa mãn: 2<a<b<100
    Một cặp số (i, j) được gọi là nguyên tố cùng nhau nếu i khác j và ước số chung lớn nhất của i với j là 1
    Hãy liệt kê các cặp SNT cùng nhau trong đoạn (a, b) theo thứ tự từ nhỏ đến lớn.

    Input: có 1 dòng ghi 2 số a, b

    Output: Các cặp số (i, j) thõa mãn được viết lần lượt trên từng dòng theo định dạng (i, j) theo thứ tự 
    từ điển
*/
#include <iostream>
#include <math.h>
using namespace std;

int UCLN(int a, int b){
    if(b==0) return a;
    return UCLN(b, a%b);
}

int main(){
    int a, b;
    cin>>a>>b;
    for(int i=a; i<b; i++){
        for(int j=i+1; j<=b; j++){
            if(UCLN(i, j) == 1){
                cout<<"("<<i<<", "<<j<<")"<<endl;
            }
        }
    }
    return 0;
}