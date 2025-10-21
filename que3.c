#include<stdio.h>
#include<stdlib.h>
int main(){
	int jo,m;
	printf("enter number of joints: ");
	scanf("%d",&jo);
	printf("enter number of movements: ");
	scanf("%d",&m);
	int reading[jo][m][3];
	for(int i=0;i<jo;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<3;k++){
				printf("enter %d joint %d movement %d cordinate: ",i+1,j+1,k+1);
				scanf("%d",&reading[i][j][k]);
			}
		}
	}
	printf(" ORIGNAL MATRICES \n");
		for(int i=0;i<jo;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<3;k++){
				printf("%d\t",reading[i][j][k]);
			}
			printf("\n");	
		}
			printf("\n");
	}
	int positive[jo][m][3];
	for(int i=0;i<jo;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<3;k++){
			positive[i][j][k]=abs(reading[i][j][k]);
			}
		}
	}
	printf(" absolute Matrix \n");
	for(int i=0;i<jo;i++){
		for(int j=0;j<m;j++){
			for(int k=0;k<3;k++){
				printf("%d\t",positive[i][j][k]);
			}
			printf("\n");	
		}
			printf("\n");
	}
	
		
	return 0;
}