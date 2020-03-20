#include <iostream>
using namespace std;
int n,k,a[15];

void init () {
    cin >>n>>k;
    for (int i=1;i<=k;i++) a[i]=i;
}
bool isEnd() {
    if (a[1]!= n-k+1) return false;
    return true;
}
void display() {
    for (int i=1;i<=k;i++) cout << a[i];
    cout << endl;
}
void gene() {
    for (int i=k;i>=1;i--) {
        if (a[i] != n-k+i) {
            a[i]++;
            for (int j=i+1;j<=k;j++) {
                a[j]=a[i]+j-i;
            }
            break;
        }
    }
}

main() {
    init();
    while (!isEnd()) {
        display();
        gene();
    }
    display();
}