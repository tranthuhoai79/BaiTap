#include<iostream>
using namespace std;
int k,n,a[15];
void display();
void Try(int i);
main() {
    cin>>n>>k;
    Try(1);
}

void display () {
    for(int i=1;i<=k;i++) cout<<a[i];
    cout<<endl;
}

void Try (int i) {
    int j;
    for (int j=a[i-1]+1;j<=n-k+i;j++) {
        a[i]=j;
        if (i==k) {
            display();
        }
        else Try(i+1);
    }
}
