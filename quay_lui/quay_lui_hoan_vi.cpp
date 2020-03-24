#include<iostream>
using namespace std;

int n,a[15];
int Bool[15]={0};
void display();
void Try(int i);

main() {
    cin>>n;
    Try(1);
}

void display () {
    for (int i=1;i<=n;i++) cout<<a[i];
    cout<<endl;
}

void Try (int i) {
    int j;
    for (int j=1;j<=n;j++) {
        // kiểm tra nêu phần tử chưa được sử dụng thì đánh dấu
        if (!Bool[j]) {
            a[i]=j;     //sử dụng 1 phần tử
            Bool[j]=1;  //đánh dấu đã dùng
            if (i==n) display();
            else Try(i+1);
            Bool [j]=0; //thiết lập lại
        }
    }
}
