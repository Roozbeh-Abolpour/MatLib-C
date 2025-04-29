#ifndef MatLibH
#define MatLibH
#include  <Math.h>
#include "MatLib.h"

Mat* randm(int r,int c,double l,double u){
	Mat* R=newmat(r,c,1);	
	int k=0;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			double r=((double)rand())/((double)RAND_MAX);
			R->entries[k++]=l+(u-l)*r;
		}
	}
	return R;
}

void showmat(Mat* A){
	if(A->row>0&&A->col>0){
		int k=0;
		printf("[");
		for(int i=1;i<=A->row;i++){
			for (int j=1;j<=A->col;j++){
				if(j<A->col){
					printf("%f\t",A->entries[k++]);
				}else{
					printf("%f",A->entries[k++]);
				}
			}
			if(i<A->row){
				printf("\n");
			}else{
				printf("]\n");
			}
		}	
		printf("\n");
	}else{
		printf("[]");
	}
}

#endif
