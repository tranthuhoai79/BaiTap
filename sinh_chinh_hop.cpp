#include<iostream>
#include <algorithm>
using namespace std;

int n,a[15];

void init () {
    cin >>n;
    for (int i=1;i<=n;i++) a[i]=i;
}

bool isEnd () {
    for (int i=1;i<=n;i++) {
        if (a[i]!=n-i+1) return false;
    }
    return true;
}

void display () {
    for (int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}

void gene () {
    int i;
    for (int i=n;i>=1;i--) {
         if (i==1) return ;
        if (a[i-1]<a[i]) break;     //tìm đoạn giảm dần dài nhất
    }
    for (int j=n;j>=i;j--) {
        if (a[j]>a[i-1]) {
            swap(a[i-1],a[j]);      //đổi chỗ phần tử nhỏ nhất lớn hơn a[i-1] trong đoạn vừa tìm được với a[i-1] 
            sort (a+i,a+n+1);         //sắp xếp tăng dần từ a[i] đến a[n]
            break;
        }
    }  
}

int main () {
    init();
    while (!isEnd()) {
        display();
        gene();
    }
    display();
    return 0;
}