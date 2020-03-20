#include<iostream>
using namespace std;
int fibonacci (int n); 
main () {
    int n;cin>>n;
    cout <<fibonacci(n);
}
int fibonacci (int n) {
    if (n==1 || n==2) return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
//điều kiện dừng: n=1 hoặc n=2 trả về 1
//P': fibonacci(n-1)+fibonacci(n-2) ------ số sau bằng tổng 2 số đứng trước