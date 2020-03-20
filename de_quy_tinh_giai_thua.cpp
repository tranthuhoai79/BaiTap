#include<iostream>
using namespace std;
int giaithua (int n);

main (){
    int n; cin>>n;
    cout <<giaithua(n);
}

int giaithua (int n) {
    if (n==0) return 1;
    return n*giaithua(n-1);
}
//điều kiện dừng: n=0 trẩ về 1 
//P': n*giaithua(n-1)