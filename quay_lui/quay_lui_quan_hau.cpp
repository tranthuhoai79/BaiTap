#include<iostream>
using namespace std;

int n=8,a[9][9];
void result();
bool BackTrack(int cot);
bool check(int hang, int cot);

main(){
    // khoi tao tat ca cac gia tri tren mang la 0
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            a[i][j]=0;
        }
    }
    if (BackTrack(0)) result();		//neu kiem tra dat duoc hau in ra ket qua
    else cout <<"khong giai duoc";	// khong dat duoc hau 

}

void result() {	//in ket qua
    for (int i=0;i<n; i++) {
        for (int j=0;j<n;j++) {
            cout<<a[i][j]<< " ";
        }
        cout<< endl;
    }
}

bool check(int hang, int cot) {
    int i,j;
    // kiem tra hang ngang
    for (int i=0;i<cot;i++) {
        if (a[hang][i]==1) return false;    // khong dat duoc hau
    }
    // kiem tra huong trai tren
    i=hang,j=cot;
    while (i>=0 && j>=0) {
        if (a[i][j]==1){    // khong dat duoc hau
            return false;
        }
        i--;
        j--;
    }
    //kien tra trai duoi
    i=hang,j=cot;
    while (i<n && j>=0) {
        if (a[i][j]==1) {   // khong dat duoc hau
            return false;
        }
        i++;
        j--;
    }
    return true;			//dat hau
}

bool BackTrack (int cot) {
    if (cot>=n) {
        return true;
    }    
    for (int i=0;i<n;i++) {
        if (check(i,cot)) {
        	a[i][cot]=1;  // dat hau
	        if (BackTrack(cot+1)) return true;  //dat hau buoc tiep theo
    	    a[i][cot]=0;//lui lai
		}
        
    }
    return false;
}


