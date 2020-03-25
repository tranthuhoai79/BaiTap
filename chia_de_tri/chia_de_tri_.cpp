#include <iostream>
using namespace std;
int n,a[10005];
void init() {
	cin>>n;
	for (int i=0;i<n;i++) cin>>a[i];
}
int search (int a[], int l, int r, int x) {
	if(l>r) return -1;
	else {
		int mid=(l+r)/2;
		if (a[mid]==x) return mid;
		if (a[mid]<x) return search(a,mid+1,r,x);
		if (a[mid]>x) return search(a,l,mid-1,x);
	}
		
} 
main()
{
	init ();
	cout << search(a,0,n-1,4);
}

// @author : Tran Thu Hoai.

