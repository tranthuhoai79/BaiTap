#include<iostream>
using namespace std;
int n,a[15];
void display();
void Try (int i);

main (){
    cin>>n;
    Try(1);
}

void display() {
    for (int i=1;i<=n;i++) cout<<a[i];
    cout <<endl;
}

void Try (int i) {
    int j;
    for (j=0;j<=1;j++) {
        a[i]=j;
        if (i==n) display();
        else Try(i+1);
    }
}
