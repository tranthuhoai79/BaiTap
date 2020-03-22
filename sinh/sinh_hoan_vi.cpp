//đề: sinh hoán vị
//VD:n=3
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1
//


#include<iostream>
#include<algorithm>
using namespace std;

int n,a[15];
void init();
bool isEnd();
void display();
void gene();
bool comp(int x,int y);

main() {
    init();
    while (!isEnd()) {
        display();
        gene();
    }
    display();
}
bool comp (int x, int y) {
    return x>y;
}
void init () {
    cin>>n;
    for (int i=1;i<=n;i++) a[i]=i;
}

bool isEnd(){
    if (is_sorted(a+1,a+n+1,comp)) return true;
    return false;
}

void display(){
    for (int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;

}

void gene () {
     int i;  // đánh dấu đầu đoạn giảm dần
    for ( i=n;i>1;i--) {
        if (a[i-1]<a[i]) break;
    }
    for (int j=n;j>=i;j--) {
        if (a[j]>a[i-1]) {
            swap (a[i-1],a[j]);
            sort(a+i,a+n+1);
            break;
        }
    }

}
