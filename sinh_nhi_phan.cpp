#include <iostream>
using namespace std;
int n,a[15];
void init();
bool isEnd();
void display();
void gene();

main() {
    init();
    while (!isEnd()) {
        display();
        gene();
    }
    display();
}

void init() {
    cin>>n;
    for (int i=1;i<=n;i++) a[i]=0;
}

bool isEnd() {
    for (int i=1;i<=n;i++) {
        if (a[i]==0) return false;
    }
    return true;
}

void display() {
    for (int i=1;i<=n;i++) cout << a[i];
    cout <<endl;
}

void gene() {
    for (int i=n;i>=1;i--) {
        if (a[i]==0) {
            a[i]=1;
            for (int j=i+1;j<=n;j++) a[j]=0;
            break;
        }
    }
}