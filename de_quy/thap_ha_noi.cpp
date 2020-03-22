#include <iostream>
using namespace std;
void thapHN (int n,char A, char B, char C) {
	if (n==1) {
		cout << A <<" ---> "<< C <<endl;
		return;
	}
	else {
		thapHN(n-1,A,C,B);
		thapHN(1,A,B,C);
		thapHN(n-1,B,A,C);
	}
}
main()
{
	char A,B,C;
	thapHN(4,'A','B','C');
}
//điều kiện dừng: n=1 trả về A ---> C
//P': Lấy C làm trung gian chuyển n-1 đĩa từ A sang B
//	Chuyển đãi lớn nhất sang C
//	Lấy A làm trung gian chuyển n-1 đĩa từ B sang C
// @author : Tran Thu Hoai.

