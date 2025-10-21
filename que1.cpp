#include<stdio.h>
int main(){
	int b,p;
	printf("enter number of branches: ");
	scanf("%d",&b);
	printf("enter number of products: ");
	scanf("%d",&p);
	int sales[2][b][p];
	for(int i=0;i<2;i++){
		for(int j=0;j<b;j++){
			for(int k=0;k<p;k++){
				printf("enter sale of branch %d product %d: ",j+1,k+1);
				scanf("%d",&sales[i][j][k]);
			}
		}
	}
	printf(" ORIGNAL MATRICES \n");
		for(int i=0;i<2;i++){
		for(int j=0;j<b;j++){
			for(int k=0;k<p;k++){
				printf("%d\t",sales[i][j][k]);
			}
			printf("\n");	
		}
			printf("\n");
	}
	int sum[b][p];
	for(int j=0;j<b;j++){
			for(int k=0;k<p;k++){
				sum[j][k]=sales[0][j][k]+sales[1][j][k];	
			}
		}
		printf("SUMMED UP MATRIX \n");
		for(int j=0;j<b;j++){
			for(int k=0;k<p;k++){
				printf("%d\t",sum[j][k]);
			}
			printf("\n");
		}
	return 0;
}