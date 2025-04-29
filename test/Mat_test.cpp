#include "stdio.h"
#include "Matlib.h"
#include "MatlibH.h"

int main()
{
	Mat* A=randm(4,4,-5,5);	
	printf("A=");
	showmat(A);		
	MatList* ml=lu(A);
	Mat* L=ml->mat;
	Mat* U=ml->next->mat;
	MatList* ml1=qr(A);
	Mat* Q=ml->mat;
	Mat* R=ml->next->mat;
	printf("LU decomposition: \n");
	printf("L=");
	showmat(L);	
	printf("U=");
	showmat(U);
	printf("QR decomposition: \n");
	printf("Q=");
	showmat(Q);	
	printf("R=");
	showmat(R);
	getchar();
	return 0;
}

