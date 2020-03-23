#include<iostream>
using namespace std;
int n,a[15];
void result();
void BackTrack (int i);

main (){
    cin>>n;
    BackTrack(1);
}

void result() {
    for (int i=1;i<=n;i++) cout<<a[i];
    cout <<endl;
}

void BackTrack (int i) {
    int j;
    for (j=0;j<=1;j++) {
        a[i]=j;
        if (i==n) result();
        else BackTrack(i+1);
    }
}