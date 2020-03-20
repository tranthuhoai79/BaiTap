#include<iostream>
#include<cmath>
using namespace std;
double fbnc (double n);

main () {
    double n; cin>>n;
    cout << fbnc(n);
}

double fbnc (double n) {
    if (n==1) return 1;
    return sqrt (n+fbnc(n-1));
}
// điều kiện dừng:n=1 trả về 1
// P': căn(n+fbnc(n-1))