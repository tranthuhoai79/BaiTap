#include <iostream>
using namespace std;
int tong (int n);

main () {
    int n; cin>>n;
    cout <<tong(n);
}

int tong (int n) {
    if (n==1) return 1;
    return n+tong(n-1);
}
//điều kiện dừng:n=1 trả về 1
// P': n+tong(n-1)