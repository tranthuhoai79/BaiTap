#include<iostream>
using namespace std;
int k,n,a[15];
void result();
void BackTrack(int i);
main() {
    cin>>n>>k;
    BackTrack(1);
}

void result () {
    for(int i=1;i<=k;i++) cout<<a[i];
    cout<<endl;
}

void BackTrack (int i) {
    int j;
    for (int j=a[i-1]+1;j<=n-k+i;j++) {
        a[i]=j;
        if (i==k) {
            result();
        }
        else BackTrack(i+1);
    }
}